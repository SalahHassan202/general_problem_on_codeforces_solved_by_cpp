// D. Palindromex

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll n;
vector<ll> a;
ll salah(ll l, ll r)
{
    set<ll> st;
    for (ll i = 0; i <= n; i++)
    {
        st.insert(i);
    }

    while (l >= 0 && r < 2 * n)
    {
        if (a[l] != a[r])
        {
            break;
        }
        st.erase(a[l]);
        l--, r++;
    }
    return *st.begin();
}

void solve()
{
    cin >> n;
    a.assign(2 * n, 0);
    for (ll i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }

    ll p1 = -1, p2 = -1;
    for (ll i = 0; i < 2 * n; i++)
    {
        if (a[i] == 0)
        {
            if (p1 == -1)
            {
                p1 = i;
            }
            else
            {
                p2 = i;
            }
        }
    }

    ll s1 = salah(p1, p1);
    ll s2 = salah(p2, p2);
    ll m1 = (p1 + p2) / 2;
    ll m2 = (p1 + p2 + 1) / 2;
    ll s3 = salah(m1, m2);
    ll g = max(s1, max(s2, s3));
    cout << g << endl;
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