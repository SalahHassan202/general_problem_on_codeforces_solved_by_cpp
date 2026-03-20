// E. Sum of Digits (and Again)

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll salah(ll a)
{
    ll b = 0;
    while (a > 0)
    {
        b += a % 10;
        a /= 10;
    }
    return b;
}

string hassan(ll a)
{
    string b = "";
    while (a > 9)
    {
        b += to_string(a);
        a = salah(a);
    }
    b += to_string(a);
    return b;
}

void solve()
{
    string s;
    cin >> s;
    ll n = s.size();
    if (n == 1)
    {
        cout << s << endl;
        return;
    }
    vector<ll> v1(10, 0);
    ll a = 0;
    for (char c : s)
    {
        v1[c - '0']++;
        a += (c - '0');
    }

    for (ll b = 1; b <= a; b++)
    {
        string t = hassan(b);
        ll tl = t.size();
        if (tl >= n)
        {
            continue;
        }
        vector<ll> v2(10, 0);
        for (char c : t)
        {
            v2[c - '0']++;
        }

        vector<ll> v3(10, 0);
        bool ok = true;
        for (ll i = 0; i <= 9; i++)
        {
            v3[i] = v1[i] - v2[i];
            if (v3[i] < 0)
            {
                ok = false;
                break;
            }
        }
        if (!ok)
        {
            continue;
        }
        ll c = 0;
        for (ll i = 0; i <= 9; i++)
        {
            c += i * v3[i];
        }

        if (c != b)
        {
            continue;
        }

        string r = "";
        for (ll i = 9; i >= 0; i--)
        {
            while (v3[i] > 0)
            {
                r += (char)('0' + i);
                v3[i]--;
            }
        }

        if (r.empty() || r[0] == '0')
        {
            continue;
        }

        cout << r << t << endl;
        return;
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