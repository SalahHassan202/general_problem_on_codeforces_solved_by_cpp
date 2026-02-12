// K. Parity Alternated Deletions

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
    vector<ll> ev, od; // even ,,,, odd

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
            ev.push_back(x);
        else
            od.push_back(x);
    }

    if (abs((int)ev.size() - (int)od.size()) <= 1)
    {
        cout << 0 << endl;
        return;
    }

    ll ans = 0;

    if (ev.size() > od.size())
    {
        sort(ev.begin(), ev.end());
        int diff = ev.size() - od.size();
        for (int i = 0; i < diff - 1; i++)
            ans += ev[i];
    }
    else
    {
        sort(od.begin(), od.end());
        int diff = od.size() - ev.size();
        for (int i = 0; i < diff - 1; i++)
            ans += od[i];
    }

    cout << ans << endl;
}
int main()
{
    fast;

    solve();

    return 0;
}