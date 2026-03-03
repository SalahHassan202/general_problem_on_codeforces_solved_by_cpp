// B. Garland

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    vector<ll> freq1(26, 0);
    vector<ll> freq2(26, 0);

    for (char c : s1)
    {
        freq1[c - 'a']++;
    }

    for (char c : s2)
    {
        freq2[c - 'a']++;
    }

    ll ans = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq2[i] > 0 && freq1[i] == 0)
        {
            cout << -1 << endl;
            return;
        }

        ans += min(freq1[i], freq2[i]);
    }

    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}