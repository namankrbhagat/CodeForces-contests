#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t-->0){
      int n;
      cin >> n;
      
      int y, r;
      cin >> y >> r;

      int ans = r;
      ans += y/2;

      if(ans > n){
        cout << n << '\n';
      }else{
        cout << ans << '\n';
      }

      
    }
}