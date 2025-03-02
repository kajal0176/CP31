#include<bits/stdc++.h>
using namespace std;
bool coin(long long n,long long k){
  if(n%k==0||n%2==0){
    return true;
  }
  if(k==1){
    return true;
  }
  //if n is not divisible by 2 then its remainder will be always 1 so we need to remove 2 from t times then add 1 to 2*t if 2*t+1 is k aur divisibel eby k then return true;
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