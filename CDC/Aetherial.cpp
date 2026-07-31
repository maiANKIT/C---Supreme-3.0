#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007LL;

long long echoSum(long long N) {
    long long total = 0;
    long long i = 1;
    while (i <= N) {
        long long q = N / i;
        long long hi = N / q;          // last i in this block with same q
        long long cnt = hi - i + 1;    // number of terms in [i, hi]

        // sum of i..hi = (i+hi)*cnt/2, guaranteed integer
        // divide the EVEN one by 2 first to avoid overflow, then reduce mod
        long long blockSum;
        if (cnt % 2 == 0) {
            long long half = (cnt / 2) % MOD;
            long long s = (i % MOD + hi % MOD) % MOD;
            blockSum = (half * s) % MOD;
        } else {
            long long half = ((i + hi) / 2) % MOD;
            long long s = cnt % MOD;
            blockSum = (half * s) % MOD;
        }

        long long qmod = q % MOD;
        total = (total + blockSum * qmod) % MOD;

        i = hi + 1;
    }
    return total % MOD;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        cout << echoSum(N) << "\n";
    }
    return 0;
}