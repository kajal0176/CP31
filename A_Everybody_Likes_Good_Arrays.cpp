#include<bits/stdc++.h>
using namespace std;
int intend(vector<int>&arr){
  int cnt=0;
  stack<int>st;
  for(int i=0;i<arr.size();i++){
    if(!st.empty()){
        if(arr[i]%2&&st.top()%2){
            int x=st.top();
            st.pop();
            st.push(x*arr[i]);
            cnt++;
        }
        
        else if(arr[i]%2==0&&st.top()%2==0){
            int x=st.top();
            st.pop();
            st.push(x*arr[i]);
            cnt++;
        }
        else{
            st.push(arr[i]);
        }
    }
    else{
        st.push(arr[i]);
    }
  }
  return cnt;
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