// B. Plus-Minus Split

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
    string s;
    cin >> s;
    ll plus = 0, minus = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '+')
            plus++;
        else
            minus++;
    }

    cout << abs(plus - minus) << endl;
}

int main()
{
    fast;

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}