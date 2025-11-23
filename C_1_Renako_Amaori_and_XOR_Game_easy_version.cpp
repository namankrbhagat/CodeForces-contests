#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;

        // Compute initial XORs
        int xorA = 0, xorB = 0;
        for (int i = 0; i < n; i++) {
            xorA ^= a[i];
            xorB ^= b[i];
        }

        // Count diff positions on odd and even indices
        int lastInd = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                lastInd = i;
            }
        }

        // Determine result
        if (xorA == xorB || lastInd == -1) {
            cout << "Tie\n";
            continue;
        }
        

        if(lastInd % 2){
            cout << "Mai" << '\n';
        }else{
            cout << "Ajisai" << '\n';
        }
    }

    return 0;
}
