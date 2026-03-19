// A. k-th divisor

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
    vector<ll> v1;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v1.push_back(i);
            if (i * i != n)
            {
                v1.push_back(n / i);
            }
        }
    }
    sort(v1.begin(), v1.end());
    if (v1.size() < k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << v1[k - 1] << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}