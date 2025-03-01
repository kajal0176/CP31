#include<bits/stdc++.h>
using namespace std;
int solve(string &s){
    //cout<<s<<" ";
  int i=0;
  int j=s.size()-1;
  while(i<=j){
  if(s[i]!=s[j]){
    i++;
    j--;
  }
  else return j-i+1;
  }
  return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
    int ans=solve(s);
    cout<<ans<<"\n";
    }
   
    return 0;
}