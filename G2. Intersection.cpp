// G2. Intersection

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

using namespace std;

void solve()
{
    ll l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if (r1 < l2)
        cout << -1;
    else
        cout << max(l1, l2) << ' ' << min(r1, r2);
}

int main()
{
    fast;

    solve();

    return 0;
}
