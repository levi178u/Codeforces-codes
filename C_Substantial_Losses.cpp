#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;

int main() {
    int T;
    cin >> T;

    for (int case_num = 1; case_num <= T; ++case_num) {
        long long W, G, L;
        cin >> W >> G >> L;

        vector<long long> E(W + L + 1, -1);
        E[G] = 0;

        for (int w = G + 1; w <= W + L; ++w) {
            if (w == W + L) {
                E[w] = 1 + E[w - 1];
            } else {
                E[w] = 1 + (E[w + 1] + E[w - 1]) / 2;
            }
            E[w] %= MOD;
        }

        cout << "Case #" << case_num << ": " << (E[W] * E[W] - 1) % MOD << endl;
    }

    return 0;
}