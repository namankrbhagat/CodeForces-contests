#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t-->0){
      int a,b;
      cin >> a >> b;

      string m,n;
      cin >> m;
      cin >> n;

      int ops = 0;
      bool ans = false;
      for(int i=0;i<6;i++){
        if(m.find(n) != string::npos){
          ans = true;
          break;
        }
        m+=m;
        ops++;
      }

      if(ans) cout << ops << '\n';
      else cout << -1 << '\n';
      
      
    }
}