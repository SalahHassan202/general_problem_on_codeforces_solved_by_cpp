// B. Simply Sitting on Chairs

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
    vector<ll> p(n + 1), s(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> p[i];
        s[p[i]] = i;
    }

    ll a = 0, d = 0;
    for (ll i = 1; i <= n + 1; i++)
    {
        a = max(a, (i - 1) - d);

        if (i <= n)
        {
            if (s[i] < i)
            {
                d++;
            }
        }
    }
    cout << a << endl;
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