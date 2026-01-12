// B. Find

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == k)
        {
            cout << i;
            break;
        }
    }
    cout << "Not Found";
}

int main()
{
    fast;

    solve();

    return 0;
}