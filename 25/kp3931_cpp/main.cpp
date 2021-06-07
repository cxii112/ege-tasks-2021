#include <iostream>
#include <cmath>

int countDividers(int of) {
    int result = 0;
    for (int i = 1; i <= (int)std::sqrt(of); i++) {
        if (of % i == 0) result++;
    }
    result *= 2;
    if ((int)std::sqrt(of) == std::sqrt(of)) result -= 1;
    return result;
}

int main() {
    const int START = 700000;
    int len = 5;
    int currDividersCount = 0;
    int idx = START;
    while (len > 0) {
        if (countDividers(idx) > currDividersCount) {
            currDividersCount = countDividers(idx);
            std::cout << idx << ' ' << currDividersCount << std::endl;
            len--;
        }
        idx++;
    }
    return 0;
}
