// I. Exit Music (For A Contest)

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
    vector<ll> t(n);
    for (ll i = 0; i < n; i++)
        cin >> t[i];

    ll l = 0, r = n - 1;
    ll timeL = 0, timeR = 0;
    ll cntL = 0, cntR = 0;

    while (l <= r)
    {
        if (timeL <= timeR)
        {
            timeL += t[l];
            l++;
            cntL++;
        }
        else
        {
            timeR += t[r];
            r--;
            cntR++;
        }
    }

    cout << cntL << " " << cntR << "\n";
}

int main()
{
    fast;

    solve();

    return 0;
}
