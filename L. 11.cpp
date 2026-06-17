// L. 11

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

set<ll> st;
ll n;
void salah(ll c, ll x, ll y)
{
    if (c > n)
    {
        return;
    }
    if (c > 0)
    {
        st.insert(c);
    }
    if (c > 0 || x > 0)
    {
        salah(c * 10 + x, x, y);
    }
    if (c > 0 || y > 0)
    {
        salah(c * 10 + y, x, y);
    }
}

void solve()
{
    cin >> n;
    for (ll i = 0; i <= 9; i++)
    {
        for (ll j = i; j <= 9; j++)
        {
            salah(0, i, j);
        }
    }
    cout << st.size() << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}