// A. 1

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll n, ans;
void salah(ll x)
{
    if (x > n)
    {
        return;
    }
    if (x > 0)
    {
        ans++;
    }
    salah(x * 10);
    salah(x * 10 + 1);
}

void solve()
{
    cin >> n;
    ans = 0;
    salah(1);
    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}