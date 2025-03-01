#include<bits/stdc++.h>
using namespace std;
int intend(vector<int>&arr){
  unordered_map<int,int>mp;
  int xr=0;
  for(int i=0;i<arr.size();i++){
   xr^=arr[i];
  }
  if(arr.size()%2==0){
   if(xr==0){
    return 0;
   }
   return -1;
  }
  return xr;
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
       cout<<ans<<"\n";
    }
   
    return 0;
}