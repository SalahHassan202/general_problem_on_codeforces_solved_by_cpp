// T. Borya's Diagnosis

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
    ll cur = 1;

    for (int i = 0; i < n; i++)
    {
        ll s, d;
        cin >> s >> d;

        if (cur <= s)
        {
            cur = s;
        }
        else
        {
            ll k = (cur - s + d - 1) / d;
            cur = s + k * d;
        }
        cur++;
    }

    cout << cur - 1 << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}