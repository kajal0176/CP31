#include<bits/stdc++.h>
using namespace std;
int intend(vector<int>&arr){
  for(int i=0;i<arr.size();i++){
    for(int j=i+1;j<arr.size();j++){
        int t=__gcd(arr[i],arr[j]);
        if(t==1||t==2){
            return true;
        }
    }
  }
  return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
       int ans= intend(arr);
       if(ans){
        cout<<"YES\n";
       }
       else cout<<"NO\n";
    }
  
    return 0;
}