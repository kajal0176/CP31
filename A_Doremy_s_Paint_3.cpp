#include <bits/stdc++.h>
using namespace std;
bool intend(vector<int> &arr)
{
    unordered_map<int, int> st;
    for (int i = 0; i < arr.size(); i++)
    {
        st[arr[i]]++;
    }
    if (st.size() == 1)
        return true;
    if (st.size() > 2)
        return false;
    int t1 = -1;
    int t2 = -1;
    int cnt = 0;
    for (auto it : st)
    {
        if (cnt == 0)
        {
            t1 = it.second;
        }
        else
        {
            t2 = it.second;
        }
        cnt++;
    }
    return abs(t1 - t2) <= 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool ans = intend(arr);
        if (ans)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}