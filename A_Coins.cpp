#include<bits/stdc++.h>
using namespace std;
bool coin(long long n,long long k){
  if(n%k==0||n%2==0){
    return true;
  }
  if(k==1){
    return true;
  }
 return (k-1)%2==0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        bool ans=coin(n,k);
        if(ans){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}