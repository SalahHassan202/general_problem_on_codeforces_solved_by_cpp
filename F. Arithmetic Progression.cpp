// F. Arithmetic Progression

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }

    map<ll, ll> mp;
    for (ll i = 0; i < n - 1; i++)
    {
        mp[v[i + 1] - v[i]]++;
    }

    set<ll> st;
    if (mp.size() == 1)
    {
        ll d = mp.begin()->first;
        st.insert(v[0] - d);
        st.insert(v[n - 1] + d);
        if (n == 2 && d > 0 && d % 2 == 0)
        {
            st.insert(v[0] + d / 2);
        }
    }
    else if (mp.size() == 2)
    {
        auto it = mp.begin();
        ll d1 = it->first;
        ll d2 = (++it)->first;

        if (mp[d2] == 1 && d2 == 2 * d1)
        {
            for (ll i = 0; i < n - 1; i++)
            {
                if (v[i + 1] - v[i] == d2)
                {
                    st.insert(v[i] + d1);
                }
            }
        }
    }

    cout << st.size() << endl;

    for (auto x : st)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}