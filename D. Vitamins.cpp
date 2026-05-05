// D. Vitamins

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
    ll g = 1e9;
    ll a = g, b = g, c = g, ab = g, ac = g, bc = g, abc = g;

    while (n--)
    {
        ll x;
        string s;
        cin >> x >> s;
        sort(s.begin(), s.end());
        if (s == "A")
        {
            a = min(a, x);
        }
        else if (s == "B")
        {
            b = min(b, x);
        }
        else if (s == "C")
        {
            c = min(c, x);
        }
        else if (s == "AB")
        {
            ab = min(ab, x);
        }
        else if (s == "AC")
        {
            ac = min(ac, x);
        }
        else if (s == "BC")
        {
            bc = min(bc, x);
        }
        else if (s == "ABC")
        {
            abc = min(abc, x);
        }
    }

    ll ans = g;
    ans = min(ans, abc);
    ans = min(ans, a + b + c);
    ans = min(ans, ab + c);
    ans = min(ans, ac + b);
    ans = min(ans, bc + a);
    ans = min(ans, ab + ac);
    ans = min(ans, ab + bc);
    ans = min(ans, ac + bc);

    if (ans >= g)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}