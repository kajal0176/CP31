#include<bits/stdc++.h>
using namespace std;
int intend(vector<int>&arr){
    //approach
    //if array is sorted then return 0 otherwise calculate minimum difference between any two adjacent element and return diff/2
  int diff=INT_MAX;
  int first;
  int last;
  for(int i=1;i<arr.size();i++){
    if(arr[i]>=arr[i-1]){
        if(diff>=arr[i]-arr[i-1]){
            diff=arr[i]-arr[i-1];
            first=arr[i-1];
            last=arr[i];
        }
       
    }
    else{
        return 0;
    }
  }
  return diff/2+1;
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
      int ans=intend(arr);
      cout<<ans<<"\n";
    }
   
    return 0;
}