// O. Operations

#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    set<ld> st;
    st.insert(a + b);
    st.insert(a - b);
    st.insert(b - a);
    st.insert(a * b);
    st.insert((ld)a / b);
    st.insert((ld)b / a);

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