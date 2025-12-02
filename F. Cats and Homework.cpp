// F. Cats and Homework

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    // x² − y² = (x − y)(x + y)
    // ==============================
    // (x − y)(x + y) = A
    // ==============================
    // 1 × A
    // A × 1
    // ==============================
    // x − y = 1
    // x + y = A
    // ==============================
    // 2x = A + 1
    // x = (A + 1) / 2
    // ==============================
    // 2y = A − 1
    // y = (A − 1) / 2
    // ==============================
    // A = 2
    // x = 3/2 = not integer
    // y = 1/2 = not integer
    // cout << -1 ;
    // ==============================

    ll n;
    cin >> n;
    if (n == 2)
    {
        cout << -1;
        return;
    }

    ll x = (n + 1) / 2;
    ll y = (n - 1) / 2;

    cout << x << " " << y;
}

int main()
{
    fast;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}