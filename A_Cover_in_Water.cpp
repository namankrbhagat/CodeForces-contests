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
      
      for(int i=0;i<n;i++){
        cin >> arr[i];
      }

      bool hasThree = false;
      for(int i=0;i<n;i++){
        if(arr[i] == '.'){
          countA++;
        }
        if(i < n-2 && ((arr[i] == '.') && (arr[i+1] == '.') && (arr[i+2] == '.'))){
          hasThree = true;
        }
      }

      if(hasThree){
        cout << 2 << '\n';
      }else{
        cout << countA << '\n';
      }
      
      
    }
}