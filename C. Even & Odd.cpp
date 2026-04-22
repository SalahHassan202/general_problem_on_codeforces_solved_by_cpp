// C. Even & Odd

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
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<ll> e, o;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            e.push_back(v[i]);
        }
        else
        {
            o.push_back(v[i]);
        }
    }
    sort(e.begin(), e.end());
    sort(o.begin(), o.end());

    ll i = 0, j = 0;
    for (ll k = 0; k < n; k++)
    {
        if (k % 2 == 0)
        {
            cout << e[i];
            i++;
        }
        else
        {
            cout << o[j];
            j++;
        }

        if (k + 1 < n)
        {
            cout << " ";
        }
    }
    cout << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}