// K. Multiplication Table

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
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " x " << n << " = " << i * n << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}
