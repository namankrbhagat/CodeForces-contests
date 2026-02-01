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
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    int ind = -1;

    for(int i=n-2;i>=0;i--){
      if(a[i] < a[i+1]){
        ind = i+1;
        break;
      }
    }

    int pos = ind;
    for(int i=ind-1;i>=0;i--){
      if(a[ind] > arr[i] && )
    }

  }
}