// P. Average 2

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

using namespace std;

void solve()
{
    double a, b, c;
    cin >> a >> b >> c;
    cout << "MEDIA = " << fixed << setprecision(1) << ((a * 2 + b * 3 + c * 5) / (10));
}

int main()
{
    fast;

    solve();

    return 0;
}
