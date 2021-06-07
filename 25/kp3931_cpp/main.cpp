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

    return 0;
}
