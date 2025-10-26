// C. Little Yassmine

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
    vector<ll> a(n);
    bool zero = false, neg = false, pos = false;
    ll mxPos = -1e18, mxNeg = -1e18;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            zero = true;
        }
        else if (a[i] < 0)
        {
            neg = true;
            mxNeg = max(mxNeg, a[i]);
        }
        else
        {
            pos = true;
            mxPos = max(mxPos, a[i]);
        }
    }

    if (zero)
        cout << 0;
    else if (neg)
        cout << mxNeg;
    else
        cout << mxPos;
}

int main()
{
    fast;

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
