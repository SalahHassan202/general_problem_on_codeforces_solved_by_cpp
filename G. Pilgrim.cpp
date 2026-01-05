// G. Pilgrim

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

using namespace std;

void solve()
{
    ll n, p;
    cin >> n >> p; // n ===> number of level
    ll x, y;
    set<ll> s;
    while (p--)
    {
        cin >> x;
        s.insert(x);
    }
    ll q;
    cin >> q;
    while (q--)
    {
        cin >> y;
        s.insert(y);
    }

    if (s.size() == n)
        cout << "Pilgrims will survive";
    else
        cout << "Pilgrims won't survive";
}

int main()
{
    fast;

    solve();

    return 0;
}
