// B. Nearest Smaller Values

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
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    stack<pair<ll, ll>> st;

    for (int i = 0; i < n; i++)
    {

        while (!st.empty() && st.top().first >= a[i])
        {
            st.pop();
        }

        if (st.empty())
        {
            cout << 0 << " ";
        }
        else
        {
            cout << st.top().second << " ";
        }

        st.push({a[i], i + 1});
    }
}

int main()
{
    fast;

    solve();

    return 0;
}
