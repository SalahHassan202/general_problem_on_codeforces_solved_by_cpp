// J. Palindrome Array

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
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}

int main()
{
    fast;

    solve();

    return 0;
}