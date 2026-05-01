// B. 2

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

vector<ll> v;
void salah(ll x)
{
    if (x > 1e10)
    {
        return;
    }
    if (x > 0)
    {
        v.push_back(x);
    }
    salah(x * 10 + 4);
    salah(x * 10 + 7);
}

void solve()
{
    ll l, r;
    cin >> l >> r;
    v.clear();
    salah(0);
    sort(v.begin(), v.end());
    ll c = l, ans = 0;
    for (ll x : v)
    {
        if (x < c)
        {
            continue;
        }

        ll f = min(r, x);
        ans += (f - c + 1) * x;
        c = f + 1;
        if (c > r)
        {
            break;
        }
    }
    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}