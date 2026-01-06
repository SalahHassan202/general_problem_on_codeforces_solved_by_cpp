// B. A Nice Array

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
    ll x;
    set<ll> s;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s.insert(x);
    }

    if (s.size() == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
