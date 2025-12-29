#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t-->0){
      string s;
      cin >> s;
      
      int Y = 0;
      int N = 0;
      for(int i=0;i<s.size();i++){
        if(s[i] == 'Y'){
          Y++;
        }else{
          N++;
        }
      }

      if(N <= 1){
        cout << "NO" << '\n';
      }else{
        cout << "YES" << '\n';
      }
    }
}