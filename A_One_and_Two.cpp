#include<bits/stdc++.h>
using namespace std;

int intend(vector<int>&arr){
 int count=0;
 for(int i=0;i<arr.size();i++){
    if(arr[i]==2){
        count++;
    }
 }
 if(count%2){
    return -1;
 }
 int t=0;
 for(int i=0;i<arr.size();i++){
    if(arr[i]==2){
        t++;
        if(t==count/2){
            return i+1;
        }
    }
 }
 return 1;
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