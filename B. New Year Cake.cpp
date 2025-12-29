// B. New Year Cake

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll t;
    cin >> t;
    ll a, b;
    while (t--)
    {
        cin >> a >> b;

        ll ans = 0;
        {
            ll w = a, d = b; // w ==> white  ,,, d ==> d
            ll s = 1;
            ll layers = 0;
            bool x = true;

            while (true)
            {
                if (x)
                {
                    if (w < s)
                        break;
                    w -= s;
                }
                else
                {
                    if (d < s)
                        break;
                    d -= s;
                }
                layers++;
                s *= 2;
                x = !x;
            }
            ans = max(ans, layers);
        }

        {
            ll w = a, d = b;
            ll s = 1;
            ll layers = 0;
            bool x = false;

            while (true)
            {
                if (x)
                {
                    if (w < s)
                        break;
                    w -= s;
                }
                else
                {
                    if (d < s)
                        break;
                    d -= s;
                }
                layers++;
                s *= 2;
                x = !x;
            }
            ans = max(ans, layers);
        }

        cout << ans << "\n";
    }
}

int main()
{
    fast;

    solve();

    return 0;
}