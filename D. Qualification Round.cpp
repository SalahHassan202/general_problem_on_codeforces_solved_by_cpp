// D. Qualification Round

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll x = a[k - 1];
    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= x && a[i] > 0)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}