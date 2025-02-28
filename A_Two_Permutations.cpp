#include<bits/stdc++.h>
using namespace std;
void intend(){
  int n,a,b;
  cin>>n>>a>>b;
  if(n-(a+b)>1||n==a&&n==b){
    cout<<"Yes"<<"\n";
  }
  else{
    cout<<"No"<<"\n";
  }
}
int main(){
    int t;
    cin>>t;
    while(t--)
   intend();
    return 0;
}