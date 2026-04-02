// E. Sliding Median

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

multiset<ll> l, r;
void salah()
{
    while (l.size() > r.size() + 1)
    {
        auto it = prev(l.end());
        r.insert(*it);
        l.erase(it);
    }
    while (l.size() < r.size())
    {
        auto it = r.begin();
        l.insert(*it);
        r.erase(it);
    }
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v1(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    for (ll i = 0; i < k; i++)
    {
        l.insert(v1[i]);
    }

    while (l.size() > (k + 1) / 2)
    {
        auto it = prev(l.end());
        r.insert(*it);
        l.erase(it);
    }

    cout << *prev(l.end()) << " ";
    for (ll i = k; i < n; i++)
    {
        if (v1[i] <= *prev(l.end()))
        {
            l.insert(v1[i]);
        }
        else
        {
            r.insert(v1[i]);
        }

        if (v1[i - k] <= *prev(l.end()))
        {
            l.erase(l.find(v1[i - k]));
        }
        else
        {
            r.erase(r.find(v1[i - k]));
        }
        salah();
        cout << *prev(l.end()) << " ";
    }
    cout << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}