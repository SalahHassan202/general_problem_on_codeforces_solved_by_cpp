// C. Dr.74

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

    for (int i = 0; i + n < 10; i++)
    {
        if (s[i] != s[i + n])
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}