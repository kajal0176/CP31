#include<bits/stdc++.h>
using namespace std;
bool intend(vector<int>&arr){
    reverse(arr.begin(),arr.end());
   for(int i=1;i<arr.size();i++){
    if(arr[i]!=arr[i-1]){
        swap(arr[i],arr[1]);
        return true;
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


        bool f=intend(arr);
        if(f==1){
            cout<<"YES\n";
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<"NO\n";
        }
    }
     
    return 0;
}