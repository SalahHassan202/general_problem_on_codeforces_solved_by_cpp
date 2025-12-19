// A. Line Breaks

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
        ll n, m;
        cin >> n >> m;

        ll sum = 0, cnt = 0;
        bool stop = false;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            if (!stop && sum + s.size() <= m)
            {
                sum += s.size();
                cnt++;
            }
            else
            {
                stop = true;
            }
        }

        cout << cnt << '\n';
    }
}

int main()
{
    fast;

    solve();

    return 0;
}