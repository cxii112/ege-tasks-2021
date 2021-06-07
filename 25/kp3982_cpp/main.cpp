#include <iostream>
#include <cmath>
#include <map>

int main() {
    const int BASE_A = 2;
    const int BASE_B = 7;
    const bool IS_M_EVEN = false;
    const bool IS_N_EVEN = true;
    const long START = 100000000;
    const long STOP = 300000000;

    int mMax = 0;
    int nMax = 0;
    while (std::pow(BASE_A, mMax++) <= STOP);
    while (std::pow(BASE_B, nMax++) <= STOP);

    std::map<unsigned long long, int> Ns_n_sums;
    for (int m = 0; m <= mMax; m++) {
        if ((m % 2 == 0) != IS_M_EVEN) continue;
        for (int n = 0; n <= nMax; n++) {
            if ((n % 2 == 0) != IS_N_EVEN) continue;
            auto current =
                    (unsigned long long) (std::pow(BASE_A, m) * std::pow(BASE_B, n));
            if (START <= current && current <= STOP)
                Ns_n_sums[current] = m + n;
        }
    }

    for (auto item: Ns_n_sums) {
        std::cout << item.first << ' ' << item.second << std::endl;
    }
    return 0;
}
