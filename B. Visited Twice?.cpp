// B. Visited Twice?

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
    vector<ll> v1(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> v1[i];
    }

    for (ll i = 1; i <= n; i++)
    {
        vector<ll> v2(n + 1, 0);
        ll x = i;
        while (true)
        {
            if (v2[x] == 1)
            {
                cout << x << " ";
                break;
            }
            v2[x] = 1;

            x = v1[x];
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