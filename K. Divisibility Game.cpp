// K. Divisibility Game

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
    ll a = 0, s = 0;
    for (int i = 1; i <= 5; i++)
    {
        ll x;
        cin >> x;
        if (x % n == 0)
            a += x;
        else
            s += x;
    }
    if (a > s)
        cout << "3abas" << endl;
    else if (s > a)
        cout << "Sultan" << endl;
    else // s == a
        cout << "TIE" << endl;
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