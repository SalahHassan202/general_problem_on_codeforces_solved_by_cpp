// C. Canvas Frames

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
    vector<ll> freq(101, 0);

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        freq[x]++;
    }

    ll tot = 0;
    for (int i = 1; i <= 100; i++)
    {
        tot += freq[i] / 2;
    }
    cout << tot / 2 << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}