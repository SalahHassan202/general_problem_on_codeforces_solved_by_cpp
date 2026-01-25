// P09. Phone Numbers

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
    string s;
    cin >> s;
    ll c8 = 0;
    for (char c : s)
    {
        if (c == '8')
        {
            c8++;
        }
    }

    ll ans = min(c8, n / 11);
    cout << ans << "\n";
}

int main()
{
    fast;

    solve();

    return 0;
}