// H. Set of Strings

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll k;
    cin >> k;
    string q;
    cin >> q;
    vector<ll> f(26, 0);
    for (auto c : q)
    {
        f[c - 'a']++;
    }
    ll d = 0;
    for (ll i = 0; i < 26; i++)
    {
        if (f[i] > 0)
        {
            d++;
        }
    }
    if (d < k)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    vector<string> v1;
    vector<ll> ok(26, 0);
    string s = "";

    for (ll i = 0; i < q.size(); i++)
    {
        if (ok[q[i] - 'a'] == 0 && v1.size() < k - 1)
        {
            if (s.size() > 0)
            {
                v1.push_back(s);
            }
            s = "";
            ok[q[i] - 'a'] = 1;
        }
        s += q[i];
    }
    v1.push_back(s);

    for (auto s : v1)
    {
        cout << s << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}