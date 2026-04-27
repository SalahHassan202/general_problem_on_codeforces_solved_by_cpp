// D. Some Characteristics

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
    for (ll i = 0; i < n; i++)
    {
        if (isdigit(s[i]))
        {
            cout << "is digit" << endl;
        }
        else if (islower(s[i]))
        {
            cout << "is lower" << endl;
        }
        else
        {
            cout << "is upper" << endl;
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}