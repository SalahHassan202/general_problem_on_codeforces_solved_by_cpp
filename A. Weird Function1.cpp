// A. Weird Function1

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

int f(int x)
{
    return 2 * x + 3;
}

void solve()
{
    int x;
    cin >> x;

    cout << f(f(f(x))) + 2 * f(x * f(x));
}

int main()
{
    fast;

    solve();

    return 0;
}
