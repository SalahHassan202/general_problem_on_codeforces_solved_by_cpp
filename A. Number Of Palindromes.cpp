// A. Number Of Palindromes

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

bool ok(ll x)
{
    string s = to_string(x);
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll c = 0;
    for (ll i = l; i <= r; i++)
    {
        if (ok(i))
        {
            c++;
        }
    }
    cout << c << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}