// U. Short Program

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
    ll a0 = 0, a1 = 1023;
    for (ll i = 0; i < n; i++)
    {
        char c;
        ll x;
        cin >> c >> x;
        if (c == '|')
        {
            a0 |= x;
            a1 |= x;
        }
        else if (c == '&')
        {
            a0 &= x;
            a1 &= x;
        }
        else
        {
            a0 ^= x;
            a1 ^= x;
        }
    }

    ll And = 1023, Or = 0, Xor = 0;
    for (ll i = 0; i < 10; i++)
    {
        ll b0 = (a0 >> i) & 1;
        ll b1 = (a1 >> i) & 1;
        if (b0 == 0 && b1 == 0)
        {
            And &= ~(1 << i);
        }
        else if (b0 == 1 && b1 == 1)
        {
            Or |= (1 << i);
        }
        else if (b0 == 1 && b1 == 0)
        {
            Xor |= (1 << i);
        }
    }

    vector<pair<char, ll>> v;
    if (And != 1023)
    {
        v.push_back({'&', And});
    }
    if (Or != 0)
    {
        v.push_back({'|', Or});
    }
    if (Xor != 0)
    {
        v.push_back({'^', Xor});
    }
    cout << v.size() << endl;
    for (auto p : v)
    {
        cout << p.first << " " << p.second << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}