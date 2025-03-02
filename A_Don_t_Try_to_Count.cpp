#include <bits/stdc++.h>
using namespace std;

int intend(string s, string t)
{
    if (s.find(t) != string::npos)
    {
        return 0;
    }
    int cnt = 0;

    while (s.find(t) == string::npos)
    {
        //  cout<<s<<" ";
        s += s;
        cnt++;
        if (s.find(t) != string::npos)
        {
            return cnt;
        }
        if (s.size() >= t.size())
        {
            s += s;
            if (s.find(t) != string::npos)
            {
                return cnt + 1;
            }
            return -1;
        }
    }
    if (s.find(t) == string::npos)
        return -1;
    return cnt;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        int ans = intend(s, t);
        cout << ans << "\n";
    }

    return 0;
}