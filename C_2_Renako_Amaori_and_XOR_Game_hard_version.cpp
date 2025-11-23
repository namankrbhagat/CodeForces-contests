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

        // Compute total XOR of arrays
        int xorA = 0, xorB = 0;
        for (int i = 0; i < n; i++) {
            xorA ^= a[i];
            xorB ^= b[i];
        }

        string winner = "Tie";

        // Process bits from MSB (20) down to LSB (0)
        // because ai, bi ≤ 1e6 (≈ 2^20)
        for (int bit = 20; bit >= 0; bit--) {

            // If both XORs already have same value for this bit,
            // this bit cannot decide the winner → skip it
            if ( (xorA & (1 << bit)) == (xorB & (1 << bit)) )
                continue;

            // Otherwise, this bit *can* decide the winner.
            // So we find the last index where this bit differs.
            int lastIdx = -1;

            for (int i = 0; i < n; i++) {
                bool setA = a[i] & (1 << bit);
                bool setB = b[i] & (1 << bit);

                if (setA != setB)
                    lastIdx = i;
            }

            // If at least one differing position exists:
            if (lastIdx != -1) {

                // If last differing position is even → Ajisai wins
                // If odd → Mai wins
                // (0-based index: even = Ajisai's turn, odd = Mai's turn)
                if (lastIdx % 2 == 0)
                    winner = "Ajisai";
                else
                    winner = "Mai";

                break; // Decision made — break out
            }
        }

        cout << winner << "\n";
    }

    return 0;
}
