#include <bits/stdc++.h>
using namespace std;
vector<int> intend(int n, int k, int x)
{
    vector<int> ans;
    
   
    if(x!=1){
       for(int i=1;i<=n;i++){
        ans.push_back(1);
       }
       return ans;
    }
    if(n%2){
        //2*x+3 form
        int x=(n-3)/2;
        for(int i=1;i<=x;i++){
            ans.push_back(2);
        }
        ans.push_back(3);
        return ans;
    }
    //even 2*x
    for(int i=0;i<n/2;i++){
        ans.push_back(2);
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n,k,x;
        cin>>n>>k>>x;
        auto ans=intend(n,k,x);
        if(ans.size()==0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            cout<<ans.size()<<"\n";
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}