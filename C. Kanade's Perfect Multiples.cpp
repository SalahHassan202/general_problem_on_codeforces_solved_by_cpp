// C. Kanade's Perfect Multiples

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    map<ll, ll> mp;
    set<ll> st;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]] = 1;
        st.insert(v[i]);
    }
    vector<ll> ans;
    while (!st.empty())
    {
        ll x = *st.begin();
        ans.push_back(x);
        st.erase(st.begin());
        for (ll j = x; j <= k; j += x)
        {
            if (!mp[j])
            {
                cout << -1 << endl;
                return;
            }
            if (st.count(j))
            {
                st.erase(j);
            }
        }
    }
    cout << ans.size() << endl;
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    fast;

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}