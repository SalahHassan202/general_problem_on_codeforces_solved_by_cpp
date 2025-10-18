// D. Elboraiy and School

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
    vector<ll> v(n);
    vector<ll> od, ev;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
            ev.push_back(i + 1);
        else
            od.push_back(i + 1);
    }

    if (od.size() >= 3)
    {
        cout << "YES" << endl;
        cout << od[0] << " " << od[1] << " " << od[2] << endl;
    }
    else if (ev.size() >= 2 && od.size() >= 1)
    {
        cout << "YES" << endl;
        cout << ev[0] << " " << ev[1] << " " << od[0] << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    fast;

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}