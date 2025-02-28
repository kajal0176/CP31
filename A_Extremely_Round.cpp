#include<bits/stdc++.h>
using namespace std;
int findNumberOfExtremelyRound(int n){
    //logic
    //number of extremly round of every digit will be 9;
    // so if given n is 3 digit then it will consist all number of 2 digit and 1 digit and of 3 digit till that no.
if(n<=9){
    return n;
}
string s=to_string(n);
int sz=s.size();
return 9*(sz-1)+n/pow(10,sz-1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
     int ans=findNumberOfExtremelyRound(n);
     cout<<ans<<"\n";
    }
   
    return 0;
}