#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

int main() {
//    const int LIMIT = (int) sqrt(5000);
    const int LIMIT = 5000;
    std::vector<int> naturalSquares;
    for (int i = 1; i <= LIMIT; i++) {
        naturalSquares.push_back(i * i);
    }
    int maxSum = INT32_MIN;
    int interested_C;
    int countTriples = 0;
    for (int i = 0; i < naturalSquares.size(); i++) {
        for (int j = i; j < naturalSquares.size(); j++) {
            const int A_SQUARE = naturalSquares[i];
            const int B_SQUARE = naturalSquares[j];
            auto C_SQUARE = std::find(naturalSquares.begin(), naturalSquares.end(),
                                      A_SQUARE + B_SQUARE);
            if (C_SQUARE == naturalSquares.end()) continue;

            countTriples++;
            const int C_SUM = i + j + 2 + (int) sqrt(*C_SQUARE);
            if (std::max(maxSum, C_SUM) == maxSum) continue;
            maxSum = std::max(maxSum, C_SUM);
            interested_C = (int) sqrt(*C_SQUARE);
        }
    }

    std::cout << countTriples << ' ' << interested_C << std::endl;
    return 0;
}
