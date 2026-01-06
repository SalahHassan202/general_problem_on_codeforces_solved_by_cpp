// D. Odds Vs Evens

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
    ll x, ev = 0, od = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (i % 2 == 0)
        {
            ev += x;
        }
        else
        {
            od += x;
        }
    }

    if (ev < od)
    {
        cout << "Odd";
    }
    else if (ev > od)
    {
        cout << "Even";
    }
    else
    {
        cout << "Equal";
    }
}

int main()
{
    fast;

    solve();

    return 0;
}
