// H. Game with Hegazy

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

const int MAX_VAL = 20;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<vector<ll>> pref_sum(MAX_VAL + 1, vector<ll>(n + 1, 0));

    for (int k = 1; k <= MAX_VAL; k++)
        for (int i = 1; i <= n; i++)
        {
            pref_sum[k][i] = pref_sum[k][i - 1];
            if (v[i] == k)
                pref_sum[k][i]++;
        }

    ll q;
    cin >> q;
    while (q--)
    {
        ll l, r, b, h;
        cin >> l >> r >> b >> h;

        ll cnt1 = pref_sum[b][r] - pref_sum[b][l - 1];
        ll cnt2 = pref_sum[h][r] - pref_sum[h][l - 1];

        if (cnt1 == cnt2)
            cout << "draw" << endl;
        else if (cnt1 > cnt2)
            cout << "bondok" << endl;
        else
            cout << "hegazy" << endl;
    }
}

int main()
{
    fast;
    solve();
    return 0;
}