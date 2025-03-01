#include<bits/stdc++.h>
using namespace std;
int intend(int x1,int y1,int x2,int y2){
  if(y1>y2)return -1;
  int up=y2-y1;
 // cout<<y1<<"k"<<y2<<",";
  x1+=up;
  y1+=up;
  if(x2>x1)return -1;
  return up+x1-x2;
}
int main(){
    int t;
    cin>>t;
    while(t--){
       int x1,y1,x2,y2;
       cin>>x1>>y1>>x2>>y2;
       int ans=intend(x1,y1,x2,y2);
       cout<<ans<<"\n";
    }
   
    return 0;
}