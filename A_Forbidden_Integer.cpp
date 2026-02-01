#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, k, x;
        cin >> n >> k >> x;

        // Case 1: 1 is available
        if(x != 1){
            cout << "YES\n";
            cout << n << "\n";
            for(int i = 0; i < n; i++) cout << 1 << " ";
            cout << "\n";
        }
        else{
            // No numbers available
            if(k == 1){
                cout << "NO\n";
            }
            // Even sum -> use 2
            else if(n % 2 == 0){
                cout << "YES\n";
                cout << n/2 << "\n";
                for(int i = 0; i < n/2; i++) cout << 2 << " ";
                cout << "\n";
            }
            // Odd sum
            else{
                // Need a 3
                if(k >= 3){
                    cout << "YES\n";
                    cout << (n-3)/2 + 1 << "\n";
                    cout << 3 << " ";
                    for(int i = 0; i < (n-3)/2; i++) cout << 2 << " ";
                    cout << "\n";
                }
                else{
                    cout << "NO\n";
                }
            }
        }
    }
}
