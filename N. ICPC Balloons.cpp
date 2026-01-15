// N. ICPC Balloons

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
    ll freq[26] = {0};
    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'A']++;
        if (freq[s[i] - 'A'] == 1)
        {
            cnt += 2;
        }
        else
        {
            cnt++;
        }
    }

    cout << cnt << endl;
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