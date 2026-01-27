// C. Life of a Flower

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
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll h = 1;
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                if (i > 0 && v[i - 1] == 0)
                {
                    flag = true;
                    break;
                }
            }
            else
            {
                if (i > 0 && v[i - 1] == 1)
                {
                    h += 5;
                }
                else
                {
                    h += 1;
                }
            }
        }

        if (flag)
            cout << -1 << endl;
        else
            cout << h << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}