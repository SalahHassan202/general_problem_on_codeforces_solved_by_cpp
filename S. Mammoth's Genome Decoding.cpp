// S. Mammoth's Genome Decoding

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
    string s;
    cin >> s;
    if (n % 4 != 0)
    {
        cout << "===" << endl;
        return;
    }

    ll ok = n / 4;
    map<char, ll> mp;
    for (auto c : s)
    {
        if (c != '?')
        {
            mp[c]++;
        }
    }

    for (auto c : {'A', 'C', 'G', 'T'})
    {
        if (mp[c] > ok)
        {
            cout << "===" << endl;
            return;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '?')
        {
            for (auto c : {'A', 'C', 'G', 'T'})
            {
                if (mp[c] < ok)
                {
                    s[i] = c;
                    mp[c]++;
                    break;
                }
            }
        }
    }
    cout << s << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}