// J. Maximum Subarray Sum II

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    vector<ll> v(n + 1), p(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> v[i];
        p[i] = p[i - 1] + v[i];
    }

    multiset<ll> st;
    ll res = -1e18;
    for (ll i = a; i <= n; i++)
    {
        st.insert(p[i - a]);
        if (i - b - 1 >= 0)
        {
            st.erase(st.find(p[i - b - 1]));
        }
        ll mn = *st.begin();
        res = max(res, p[i] - mn);
    }
    cout << res << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}