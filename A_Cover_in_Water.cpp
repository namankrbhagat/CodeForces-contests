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
      
      vector<char> arr(n);
      int countA = 0;
      int countB = 0;

      for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i] == '.'){
          countA++;
        }else{
          countB++;
        }
      }
      if(countA == 0){
        cout << 0 << '\n';
      }
      else if(countA == 3 || countA%2==0){
        cout << 2 << '\n';
      }else{
        cout << countA << '\n';
      }

      
      
    }
}