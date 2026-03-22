// J. Doggo Recoloring

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
    if (n == 1)
    {
        cout << "Yes" << endl;
        return;
    }

    vector<ll> v1(26, 0);
    for (ll i = 0; i < n; i++)
    {
        v1[s[i] - 'a']++;
    }

    ll ok = 0;
    for (ll i = 0; i < 26; i++)
    {
        if (v1[i] >= 2)
        {
            ok = 1;
        }
    }

    if (ok == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}