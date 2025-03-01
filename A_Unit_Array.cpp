#include<bits/stdc++.h>
using namespace std;
void intend(){
  int n;
  cin>>n;
  vector<int>arr(n);
  int cnt=0;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==-1){
        cnt++;
    }
  }
  int cnt1=n-cnt;
  if(cnt1>=cnt&&cnt%2==0){
    cout<<"0"<<"\n";
    return;
  }
 int half=n/2+(n%2);
 int ans=0;
 if(cnt1>=half){
    
   ans+=(cnt%2);
 }
 else{
    ans+=(half-cnt1);
    cnt-=(half-cnt1);
    ans+=(cnt%2);
 }
  cout<<ans<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        intend();
    }
  
    return 0;
}