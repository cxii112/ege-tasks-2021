#include <iostream>
#include <vector>
#include <cmath>

void findPrimes(int upTo, std::vector<bool> *addTo) {
    if ((*addTo).empty()) {
        (*addTo).assign(upTo + 1, true);
        (*addTo)[0] = (*addTo)[1] = false;
        for (unsigned long long check = 0; check < (*addTo).size(); check++) {
            if (!(*addTo)[check]) continue;
            for (unsigned long long div = 2; div <= std::sqrt(upTo); div++) {
                if (check % div == 0) (*addTo)[check] = false;
            }
        }
        return;
    }
    const auto PREV = (*addTo).size() - 1;
    (*addTo).resize(upTo + 1);
    for (auto i = PREV + 1; i < (*addTo).size(); i++) {
        (*addTo)[i] = true;
    }
    for (unsigned long long check = PREV + 1; check < (*addTo).size(); check++) {
        if (!(*addTo)[check]) continue;
        for (unsigned long long div = 2; div <= std::sqrt(upTo); div++) {
            if (check % div == 0) (*addTo)[check] = false;
        }
    }
}

int main() {
    const int DIVS_COUNT = 512;
    std::vector<bool> sieve;
    return 0;
}
