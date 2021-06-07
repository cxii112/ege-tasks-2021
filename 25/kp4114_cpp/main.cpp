#include <iostream>
#include <vector>
#include <algorithm>

void addPrimeNums(const int upperBound, std::vector<bool> *addTo) {
    if ((*addTo).empty()) {
        (*addTo).resize(upperBound + 1);
        (*addTo).assign(upperBound + 1, true);
        (*addTo)[0] = (*addTo)[1] = false;
        for (auto i = 0; i < (*addTo).size() - 1; i++) {
            if (!(*addTo)[i]) continue;
            for (auto j = i + 1; j < (*addTo).size(); j++) {
                if (!(*addTo)[j]) continue;
                if (j % i == 0) (*addTo)[j] = false;
            }
        }
    }
    const auto PREV_BOUND = (*addTo).size() - 1;
    (*addTo).resize(upperBound + 1);
    for (auto i = PREV_BOUND + 1; i < (*addTo).size() - 1; i++) {
        if (!(*addTo)[i]) continue;
        for (auto j = i + 1; j < (*addTo).size(); j++) {
            if (!(*addTo)[j]) continue;
            if (j % i == 0) (*addTo)[j] = false;
        }
    }
}

int main() {
    const int START = 3;
    const int STOP = 1000000;
    const int MIN_LEN = 90;
    const bool IS_COUNT_PRIMES = false;
    const int ANSWERS_COUNT = 4;

    std::vector<bool> sieve;
    addPrimeNums(STOP, &sieve);

    std::vector<int> primes;
    for (int i = 0; i < sieve.size(); i++) {
        if (sieve[i]) primes.push_back(i);
    }

    int lBound = START;
    int cAnswers = 0;
    while (cAnswers < ANSWERS_COUNT) {
        if (lBound == STOP) break;

        if ((primes[lBound + 1] - 1) - (primes[lBound] + 1) + 1 >= MIN_LEN) {
            std::cout << primes[lBound] + 1 << ' ' << primes[lBound + 1] - 1 << std::endl;
        }
        lBound++;
    }

    return 0;
}
