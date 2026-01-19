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
    int mx = 0; 
    for (int i = 0; i < n; i++){
      cin >> a[i];
      mx = max(mx,a[i]);
    }   

    vector<int> b;
    vector<int> c;


    for(int n : a){
      if(n < mx){
        b.push_back(n);
      }else{
        c.push_back(n);
      }
    }

    if(b.size() == 0 || c.size() == 0){
      cout << -1 << endl;
      continue;
    }else{
      cout << b.size() << " " << c.size() << endl;
    }

    for(int n : b){
      cout << n << " ";
    }
    cout << endl;

    for(int n : c){
      cout << n << " ";
    }
    cout << endl;

  }
}