// A. I Wanna Be the Guy
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
    set<ll> lvl;
    ll p;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        ll x;
        cin >> x;
        lvl.insert(x);
    }
    ll q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        ll x;
        cin >> x;
        lvl.insert(x);
    }
    if (lvl.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
}

int main()
{
    fast;

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}