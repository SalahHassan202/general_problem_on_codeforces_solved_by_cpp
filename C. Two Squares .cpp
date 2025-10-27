// C. Two Squares
#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{

    double l, s1, s2;
    cin >> l >> s1 >> s2;
    double t = 0;
    cin >> t;
    while (t--)
    {
        double x;
        cin >> x;
        double ans = sqrt(2) * (l - sqrt(x)) / (s2 - s1);
        cout << fixed << setprecision(6) << abs(ans) << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}