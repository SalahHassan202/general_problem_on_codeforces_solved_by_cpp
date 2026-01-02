// F. Abdalla and a Contest

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    if (m >= n && k >= n)
        cout << "Yes";
    else
        cout << "No";
}

int main()
{
    fast;

    solve();

    return 0;
}