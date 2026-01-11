// I. There is just No time to Die...!

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

using namespace std;

void solve()
{
    string k;
    ll n;
    cin >> k >> n;

    double rate = 0.0;

    while (n--)
    {
        double x;
        cin >> x;
        rate += 1.0 / x;
    }

    double time = 1.0 / rate;

    cout << fixed << setprecision(6) << time << '\n';
}

int main()
{
    fast;

    solve();

    return 0;
}
