// E. Elgendy Dislikes Threes

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
    ll cnt = 0, num = 0;
    while (cnt < n)
    {
        num++;
        if (num % 3 != 0 && num % 10 != 3)
            cnt++;
    }
    cout << num << endl;
}
int main()
{
    fast;

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}