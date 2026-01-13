// C. Positions

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
        if (a[i] <= 10)
        {
            cout << "A[" << i << "] = " << a[i] << endl;
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}
