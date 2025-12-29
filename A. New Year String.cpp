// A. New Year String

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll t;
    cin >> t;
    string s;
    ll n;
    while (t--)
    {
        cin >> n;
        cin >> s;
        bool has2025 = false;
        bool has2026 = false;
        for (int i = 0; i + 3 < n; i++)
        {
            if (s[i] == '2' && s[i + 1] == '0' && s[i + 2] == '2' && s[i + 3] == '5')
                has2025 = true;

            if (s[i] == '2' && s[i + 1] == '0' && s[i + 2] == '2' && s[i + 3] == '6')
                has2026 = true;
        }

        if (has2026 || !has2025)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}