#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t-->0){
      int n,k;
      cin >> n >> k;
      
      vector<int> arr(n);
      for(int i=0;i<n;i++){
        cin >> arr[i];
      }

      if(k>1){
        cout << "YES" << '\n';
      }else if(is_sorted(arr.begin(), arr.end()) && k==1){
        cout << "YES" << '\n';
      }else{
        cout << "NO" << '\n';
      }
    }
}