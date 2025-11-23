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
      if(arr[i] == -1 && i!=0 && i!=n-1){
        arr[i] = 0;
      }
    }

    if(arr[0] == -1 && arr[n-1] != -1){
      arr[0] = arr[n-1];
    }else if(arr[0] != -1 && arr[n-1] == -1){
      arr[n-1] = arr[0];
    }else if(arr[0] == -1 && arr[n-1] == -1){
      arr[0] = 0;
      arr[n-1] = 0;
    }

    int sum = abs(arr[0] - arr[n-1]);
    cout << sum << endl;
    for(int n : arr){
      cout << n << " ";
    }

    cout << '\n';
  }
}