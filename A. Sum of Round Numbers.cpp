// A. Sum of Round Numbers
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
    vector<ll> parts;
    ll power = 1;
    while (n > 0)
    {
        if (n % 10 > 0)
        {
            parts.push_back((n % 10) * power);
        }
        n /= 10;
        power *= 10;
    }
    cout << parts.size() << endl;
    for (auto i : parts)
        cout << i << " ";
    cout << endl;
}
int main()
{
    fast;

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}