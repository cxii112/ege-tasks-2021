#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

/**
 *
 * @param upperBound Will be the last number and the last index of
 *  vector you pass into addTo param
 * @param addTo Destination vector
 */
void addPrimeNums(int upperBound, std::vector<bool> *addTo){
    if ((*addTo).empty()) {
        (*addTo).resize(upperBound + 1);
        (*addTo).assign(upperBound + 1, true);
        (*addTo)[0] = (*addTo)[1] = false;

        for (unsigned long long i = 0; i < (*addTo).size() - 1; i++) {
            if (!(*addTo)[i]) continue;
            for (auto j = i + 1; j < (*addTo).size(); j++) {
                if (!(*addTo)[j]) continue;
                if (j % i == 0) (*addTo)[j] = false;
            }
        }
    }

    const auto PREV_BOUND = (*addTo).size() - 1;
    (*addTo).resize(upperBound + 1);
    for (auto i = PREV_BOUND + 1; i < (*addTo).size(); i++) {
        (*addTo)[i] = true;
    }

    for (auto i = PREV_BOUND + 1; i < (*addTo).size() - 1; i++) {
        if (!(*addTo)[i]) continue;
        for(auto j = i + 1; j < (*addTo).size(); j++) {
            if (!(*addTo)[j]) continue;
            if (j % i == 0) (*addTo)[j] = false;
        }
    }
}

std::vector<int> primeDividers(int forNumber, std::vector<bool> *searchIn) {
    std::vector<int> result;
    if (forNumber > (*searchIn).size() - 1) {
        addPrimeNums(forNumber, searchIn);
    }
    for (int i = 2; i < forNumber; i++) {
        if ((*searchIn)[i] && forNumber % i == 0) result.push_back(i);
    }
    return result;
}

int search_F(int forNumber, std::vector<bool> *searchIn){
    const std::vector<int> DIVIDERS = primeDividers(forNumber, searchIn);
    if ((*searchIn).empty()) return 0;
    return DIVIDERS.front() + DIVIDERS.back();
}

int main() {
    const int ANSWERS_COUNT = 4;
    const int START_SEARCH = 450000;
    const int DIVIDE_BY = 29;
    const int EXCESS = 11;

    std::vector<bool> sieve;
    addPrimeNums(START_SEARCH, &sieve);

    std::vector<std::pair<int, int>> answers;
    int check = START_SEARCH;
    while(answers.size() < ANSWERS_COUNT) {
        const int c_F = search_F(check, &sieve);
        if (c_F % DIVIDE_BY == EXCESS) {
            answers.emplace_back(check, c_F);
        }
        check++;
    }

    for (auto e: answers) {
        std::cout << e.first << ' ' << e.second << std::endl;
    }

    return 0;
}
