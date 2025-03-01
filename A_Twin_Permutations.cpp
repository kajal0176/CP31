#include<bits/stdc++.h>
using namespace std;
vector<int> intend(vector<int>&arr){
  int mx=*max_element(arr.begin(),arr.end());
  vector<int>ans(arr.size());
  for(int i=0;i<arr.size();i++){
    ans[i]=mx+1-arr[i];
  }
  return ans;
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
        vector<int>ans=intend(arr);
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}