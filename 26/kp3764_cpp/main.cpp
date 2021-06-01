#include <iostream>
# include <fstream>
#include <algorithm>
#include <vector>
#include <string>

bool isEven(const int V) { return V % 2 == 0; }
template <typename It>
int findOnRange(const It B, const It E, const int D, const int C) {
    int t = 0;

    if (std::find(B, E, C - D) != E) t++;
    if (std::find(B, E, C + D) != E) t++;

    return t;
}

int main() {
    const std::string TEST_FILE_NAME =
            R"(F:\studying-notes\ege\info\Source\26-48test.txt)";
    const std::string TASK_FILE_NAME =
            R"(F:\studying-notes\ege\info\Source\26-48.txt)";
    const int K = 5;

    std::ifstream ifs;
    ifs.open(TASK_FILE_NAME);
    if (!ifs.is_open()) return EXIT_FAILURE;

    std::string buff;
    ifs >> buff;
    const int LINES_COUNT = std::stoi(buff);
    std::vector<int> source;
    for (int i = 0; i < LINES_COUNT; i++) {
        ifs >> buff;
        source.push_back(std::stoi(buff));
    }
    std::sort(source.begin(), source.end());

    int pairsCount = 0;
    int minAverage = source.back();
    for (int i = 0; i < source.size() - 1; i++) {
        for (int j = i + 1; j < source.size(); j++) {
            const int CURR_SUM = source[i] + source[j];
            const int CURR_AVERAGE = CURR_SUM / 2;

            if (!isEven(CURR_SUM)) continue;
            if (findOnRange(source.begin(), source.end(), K, CURR_AVERAGE) == 0)
                continue;

            std::cout << '(' << i << ", " << j << ')' << std::endl;
            pairsCount++;
            minAverage = std::min(minAverage, CURR_AVERAGE);
        }
    }

    std::cout << pairsCount << ' ' << minAverage << std::endl;
    return EXIT_SUCCESS;
}
