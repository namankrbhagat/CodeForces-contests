#include <bits/stdc++.h>
#include <numeric>
using namespace std;
using int64 = long long;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        long long g = a[0];
        for (int i = 1; i < n; i++)
            g = gcd(g, a[i]);

        long long ans = -1;
        for (long long x = 2; x <= 100; x++) {
            if (gcd(x, g) == 1) {
                ans = x;
                break;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}

