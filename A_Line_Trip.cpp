#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t-->0){
      int n,k;
      cin >> n >> k;
      
      vector<int> arr(n);
      for(int i=0;i<n;i++){
        cin >> arr[i];
      }

      vector<int> vec;
      vec.push_back(arr[0]);
      for(int j=0;j<n-1;j++){
        vec.push_back(arr[j+1]-arr[j]);
      }
      vec.push_back((k - arr[n-1])*2);
      int ans =0;
      for(int i=0;i<vec.size();i++){
        if(vec[i]>ans){
          ans = vec[i];
        }
      }
      cout<<ans<<endl;
      
    }
}