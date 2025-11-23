#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
      cin >> arr[i];
       
    }

    bool found = false;

    for (int i = 0; i < n && !found; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((arr[j] % arr[i]) % 2 == 0) {
                cout << arr[i] << " " << arr[j] << "\n";
                found = true;
                break;
            }
        }
    }

    if (!found) cout << -1 << "\n";

    
  }
}