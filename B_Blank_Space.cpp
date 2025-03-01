#include<bits/stdc++.h>
using namespace std;
int findLongestBlankSpace(vector<int>&arr){
    int ans=0;
    int cnt=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            cnt++;
            ans=max(ans,cnt);
        }
        else{
            cnt=0;
        }
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
    int ans=findLongestBlankSpace(arr);
    cout<<ans<<"\n";
   }
    return 0;
}