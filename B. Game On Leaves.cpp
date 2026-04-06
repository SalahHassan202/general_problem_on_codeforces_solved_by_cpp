// B. Game On Leaves

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n + 1, 0);
    for (ll i = 0; i < n - 1; i++)
    {
        ll a, b;
        cin >> a >> b;
        v[a]++;
        v[b]++;
    }

    if (v[x] <= 1)
    {
        cout << "Ayush" << endl;
    }
    else
    {
        if (n % 2 == 1)
        {
            cout << "Ayush" << endl;
        }
        else
        {
            cout << "Ashish" << endl;
        }
    }
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