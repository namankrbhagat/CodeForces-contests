#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                // Swap if out of order and one is even, other is odd
                if (v[i] > v[j] && ((v[i] % 2 == 0 && v[j] % 2 != 0) || (v[i] % 2 != 0 && v[j] % 2 == 0))) {
                    swap(v[i], v[j]);
                }
            }
        }

        for (int m : v) {
            cout << m << " ";
        }
        cout << "\n";
    }
    return 0;
}
