// J. 9

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

vector<ll> v;
void salah(ll m, int c, int d)
{
    if (m > 10000000000LL)
    {
        return;
    }
    if (c == d && c > 0)
    {
        v.push_back(m);
    }
    salah(m * 10 + 4, c + 1, d);
    salah(m * 10 + 7, c, d + 1);
}

void solve()
{
    ll n;
    cin >> n;
    salah(0, 0, 0);
    sort(v.begin(), v.end());
    auto it = lower_bound(v.begin(), v.end(), n);
    cout << *it << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}