#include <iostream>
#include <map>
#include <vector>
#include <cmath>

void findPrimes(int dest, std::vector<bool> *addTo) {
//    std::vector<bool> sieve;
    if ((*addTo).empty()) {
        (*addTo).assign(dest + 1, true);
        (*addTo)[0] = (*addTo)[1] = false;
        for (int check = 0; check < (*addTo).size(); check++) {
            if (!(*addTo)[check]) continue;
            for (int mod = 2; mod <= (int) std::sqrt(check); mod++) {
                if (!(*addTo)[mod]) continue;
                if (check == mod) continue;
                if (check % mod == 0) (*addTo)[check] = false;
            }
        }
    } else {
        const auto PREV = (*addTo).size() - 1;
        (*addTo).resize(dest + 1);
        for (auto i = PREV + 1; i < (*addTo).size(); i++) {
            (*addTo)[i] = true;
        }
        for (auto check = PREV + 1; check < (*addTo).size(); check++) {
            if (!(*addTo)[check]) continue;
            for (auto mod = 2; mod <= (int) std::sqrt(check); mod++) {
                if (!(*addTo)[mod]) continue;
                if (check == mod) continue;
                if (check % mod == 0) (*addTo)[check] = false;
            }
        }
    }
//    for (unsigned long long i = 0; i < sieve.size(); i++) {
//
//    }
}

int main() {
    const int SEARCH_NEAR = 10000000;
    const int COUNT_LESS = 3;
    const int COUNT_MORE = 3;

    std::vector<bool> primes;
    findPrimes((int)std::sqrt(SEARCH_NEAR), &primes);

    return 0;
}
