// M. Inna and New Matrix of Candies

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    set<ll> st;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ll a = -1, b = -1;
        for (ll j = 0; j < m; j++)
        {
            if (s[j] == 'G')
            {
                a = j;
            }

            if (s[j] == 'S')
            {
                b = j;
            }
        }

        if (a > b)
        {
            cout << -1 << endl;
            return;
        }
        st.insert(b - a);
    }
    cout << st.size() << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}