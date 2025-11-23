#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> arr(n);

     
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }

    int mini = *min_element(arr.begin(),arr.end());
    int maxi = *max_element(arr.begin(),arr.end());

    int k;
    cin >> k;

    if(k >= mini && k <= maxi){
      cout << "YES" << "\n";
    }else{
      cout << "NO" << "\n";
    }

    
  }
}