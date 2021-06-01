#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

int main() {
    const std::string TEST_FILE_NAME = R"(F:\studying-notes\ege\info\Source\26-53test.txt)";

    std::ifstream ifs;
    ifs.open(TEST_FILE_NAME);
    if (!ifs.is_open()) return EXIT_FAILURE;

    std::string s_temp;
    ifs >> s_temp;

    std::cout << s_temp << std::endl;

    return EXIT_SUCCESS;
}
