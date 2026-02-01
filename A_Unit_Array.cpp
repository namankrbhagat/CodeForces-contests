#include <bits/stdc++.h>
using namespace std;

int main()
{
    
  int t;
  cin >> t;
  while(t--){
    int n; 
    cin >> n;

    vector<int> arr(n);
    int pos=0,neg  = 0;

    for(int i=0;i<n;i++){
      cin >> arr[i];
      if(arr[i] < 0){
        neg++;
      }else{
        pos++;
      }
    }

    int ans = 0;
    if(neg > pos){
      int need = (neg - pos + 1)/2;
      ans += need;
      pos += need;
      neg -= need;
    }

    if(neg % 2 != 0){
      ans++;
    }

    cout << ans << endl;


  }
}