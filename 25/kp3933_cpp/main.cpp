#include <iostream>
#include <map>
#include <vector>
#include <cmath>

void findPrimes(unsigned long long dest, std::vector<bool> *addTo) {
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
    const unsigned long long SEARCH_NEAR = 10000000;
    const int COUNT_LESS = 3;
    const int COUNT_MORE = 3;

    std::vector<bool> primes;
    findPrimes(SEARCH_NEAR, &primes);
    std::map<unsigned long long, unsigned long long> ans;
    auto idx = SEARCH_NEAR;
    while (ans.size() < COUNT_LESS) {
        if (primes[idx--]) ans[idx + 1] = SEARCH_NEAR - (idx + 1);
    }
    idx = SEARCH_NEAR;
    while (ans.size() < COUNT_LESS + COUNT_MORE) {
        if (primes.size() - 1 < idx) findPrimes(idx, &primes);
        if (primes[idx++]){
            ans[idx - 1] = (idx - 1) - SEARCH_NEAR;
        }
    }
    for (auto item: ans) {
        std::cout << item.first << ' ' << item.second << std::endl;
    }
    return 0;
}
