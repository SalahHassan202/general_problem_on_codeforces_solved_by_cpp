// C. Area of a Circle

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

using namespace std;

void solve()
{
    double r;
    cin >> r;
    double a = 3.14159 * r * r;
    cout << "A=" << fixed << setprecision(4) << a << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}
