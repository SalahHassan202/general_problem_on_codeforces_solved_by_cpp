// C. Make Product Equal One

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
    vector<ll> v1(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    ll ans = 0, ng = 0, ze = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v1[i] > 0)
        {
            ans += (v1[i] - 1);
        }
        else if (v1[i] < 0)
        {
            ans += (-1 - v1[i]);
            ng++;
        }
        else
        {
            ans += 1;
            ze++;
        }
    }

    if (ng % 2 == 1)
    {
        if (ze == 0)
        {
            ans += 2;
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