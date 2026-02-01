#include <bits/stdc++.h>
using namespace std;

int main()
{  
  int t;
  cin >> t;
  while(t--){
    int n,s,x; 
    cin >> n >> s >> x;

    int sum = 0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
      cin >> a[i];
      sum += a[i];
    }
    if(sum > s ){
      cout << "NO" << endl;
      continue;
    } 
    int diff = sum - s;

    if(diff % x == 0) cout  << "YES" << endl;
    else cout << "NO" << endl;



  }
}