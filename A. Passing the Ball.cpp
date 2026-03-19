// A. Passing the Ball

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
    set<ll> st;
    ll x = 1;
    st.insert(x);
    for (ll i = 0; i < n; i++)
    {
        if (s[x - 1] == 'R')
        {
            x++;
        }
        else
        {
            x--;
        }
        st.insert(x);
    }
    cout << st.size() << endl;
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