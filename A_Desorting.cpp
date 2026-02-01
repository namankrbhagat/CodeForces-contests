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

    for (int i = 0; i < n; i++){
      cin >> a[i];
      
    }  
    int i=1;
    int diff  = INT_MAX;

    bool sorted = true;
    while(i<n){
      if(a[i] < a[i-1]) sorted = false;
      diff = min(diff,a[i] - a[i-1]);
      i++;
    }

    int ans = (diff/2) + 1;

    if(sorted){
      cout << ans << endl;
    }else{
      cout << 0 << endl;
    }
  }
}