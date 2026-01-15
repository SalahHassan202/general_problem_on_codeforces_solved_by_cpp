// O. Is It Frequency

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, m, x;
    cin >> n >> m;
    ll freq[m + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        freq[x]++;
    }

    for (int i = 1; i <= m; i++)
    {
        cout << freq[i] << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}