// F. The Anonymous Size

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

    ll zero = 0, one = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            zero++;
        else
            one++;
    }

    cout << abs(one - zero) << endl;
}

int main()
{
    fast;
    solve();
    return 0;
}
