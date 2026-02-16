// R. Straight «A»

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
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum += x;
    }

    ll cnt = 0;

    while (true)
    {
        double avg = (double)sum / n;
        if (avg >= k - 0.5)
        {
            break;
        }

        sum += k;
        n++;
        cnt++;
    }

    cout << cnt;
}
int main()
{
    fast;

    solve();

    return 0;
}