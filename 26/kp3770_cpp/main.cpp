#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>

int main() {
    const std::string TEST_FILE_NAME =
            R"(F:\studying-notes\ege\info\Source\26-53test.txt)";
    const std::string TASK_FILE_NAME =
            R"(F:\studying-notes\ege\info\Source\26-53.txt)";

    std::ifstream ifs;
    ifs.open(TASK_FILE_NAME);
    std::cout << TASK_FILE_NAME << std::endl;
    if (!ifs.is_open()) return EXIT_FAILURE;

    std::string s_temp;
    ifs >> s_temp;
    const int LINES_COUNT = std::stoi(s_temp);

    std::vector<int> v_source;
    for (int i = 0; i < LINES_COUNT; i++) {
        ifs >> s_temp;
        v_source.push_back(std::stoi(s_temp));
        if (LINES_COUNT < 20) std::cout << v_source[i] << std::endl;
    }
    ifs.close();
    std::sort(v_source.begin(), v_source.end());

    int pairsCount = 0;
    int minAverage = INT32_MAX;
    for (int i = 0; i < v_source.size() - 1; i++) {
        for (int j = i + 1; j < v_source.size(); j++) {
            if (v_source[i] % 2 != 0 || v_source[j] % 2 != 0) continue;

            const int currentAverage = (v_source[i] + v_source[j]) / 2;
            if (std::find(v_source.begin(),
                          v_source.end(),
                          currentAverage) != v_source.end()) {
                pairsCount++;
                minAverage = std::min(minAverage, currentAverage);
            }
        }
    }

    std::cout << pairsCount << ' ' << minAverage << std::endl;

    return EXIT_SUCCESS;
}
