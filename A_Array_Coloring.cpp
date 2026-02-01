#include <bits/stdc++.h>
using namespace std;

int main()
{
    
  int t;
  cin >> t;
  while(t--){
    int n; 
    cin >> n; 
    vector<int> a(n);
    int evens = 0;
    int odds = 0; 
    
    for (int i = 0; i < n; i++){
      cin >> a[i];
      sum += a[i];
    }   

    if(sum % 2 == 0){
      cout << "YES" <<endl;
    }else{
      cout << "NO" <<endl;
    }
    // else if(evens == odds){
    //   if(evens % 2 == 0){
    //     cout << "YES" <<endl;
    //   }else{
    //     cout << "NO" <<endl;
    //   }
    // }else{
    //   if(odds % 2 == 0){
    //     cout << "YES" <<endl;
    //   }else{
    //     cout << "NO" <<endl;
    //   }
    // }

  }
}