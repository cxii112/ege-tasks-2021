#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>

bool isEven(const int a) { return a % 2 == 0; }
bool isEven(const unsigned int a) { return a % 2 == 0; }

int main() {

    const std::string TEST_FILE_NAME =
            R"(F:\studying-notes\ege\info\Source\26-50test.txt)";
    const std::string TASK_FILE_NAME =
            R"(F:\studying-notes\ege\info\Source\26-50.txt)";

    std::ifstream ifs;
    ifs.open(TASK_FILE_NAME);

    if (!ifs.is_open()) return EXIT_FAILURE;

    std::string s_temp;
    ifs >> s_temp;
    const int LINES_COUNT = std::stoi(s_temp);

    std::vector<int> v_source;
    for (auto i = 0; i < LINES_COUNT; i++) {
        ifs >> s_temp;
        v_source.push_back(std::stoi(s_temp));
    }
    std::sort(v_source.begin(),v_source.end());

    const unsigned long long int QUARTER = v_source.size() / 4;
    const unsigned long long int HALF = v_source.size() / 2;
    int pairsCount = 0;
    int minAverage = INT32_MAX;
    for (int i = 0; i < v_source.size() - 1; i++) {
        for (int j = i + 1; j < v_source.size(); j++) {
            const int CURRENT_SUM = v_source[i] + v_source[j];
            const int CURRENT_AVERAGE = CURRENT_SUM / 2;
            if (!isEven(CURRENT_SUM)) continue;
            if (CURRENT_AVERAGE <= v_source[HALF - 1]) continue;
            if (CURRENT_AVERAGE >= v_source[v_source.size() - QUARTER]) continue;

            pairsCount++;
            minAverage = std::min(minAverage, CURRENT_AVERAGE);
        }
    }

    std::cout << pairsCount << ' ' << minAverage << std::endl;

    return EXIT_SUCCESS;
}
