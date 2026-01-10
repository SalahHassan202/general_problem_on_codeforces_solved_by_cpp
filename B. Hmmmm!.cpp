// B. Hmmmm!

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
    ll a, b;
    cin >> a >> b;
    ll x, sum = 0;
    while (n--)
    {
        cin >> x;
        if (x >= a && x <= b)
        {
            sum += x;
        }
    }
    cout << sum << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}
