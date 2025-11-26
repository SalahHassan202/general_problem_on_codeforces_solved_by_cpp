// P. Hard Equation

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;
// 2X^2 ≤ 1,000,000
// X^2 ≤ 500,000
// X ≤ sqrt(500,000) ≈ 707
////////////////////////////////////
// 3Y^3 ≤ 1,000,000
// Y^3 ≤ 333,333
// Y ≤ ∛333333 ≈ 69
////////////////////////////////////
// 4Z^4 ≤ 1,000,000
// Z^4 ≤ 250,000
// Z ≤  250,000 ≈ 22
////////////////////////////////////
//  X ≤ 800
// Y ≤ 120
// Z ≤ 50
vector<ll> v;
void calc()
{
    for (int x = 0; x <= 800; x++)
    {
        ll v1 = 2LL * x * x;
        if (v1 > 1000000)
            break;

        for (int y = 0; y <= 120; y++)
        {
            ll v2 = v1 + 3LL * y * y * y;
            if (v2 > 1000000)
                break;

            for (int z = 0; z <= 50; z++)
            {
                ll v3 = v2 + 4LL * z * z * z * z;
                if (v3 > 1000000)
                    break;
                v.push_back(v3);
            }
        }
    }

    sort(v.begin(), v.end());
}
void solve()
{

    ll n;
    cin >> n;
    ll ans = upper_bound(v.begin(), v.end(), n) - v.begin();
    cout << ans << endl;
}

int main()
{
    fast;
    calc();
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}