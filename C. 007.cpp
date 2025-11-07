// C. 007

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
    set<char> st;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        st.insert(c);
    }
    if (st.size() % 2 == 0)
        cout << "Continue";
    else
        cout << "Stop";
}

int main()
{
    fast;

    ll t = 1;
    // cin >> t ;
    while (t--)
    {
        solve();
    }

    return 0;
}