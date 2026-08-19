// V. Another Sorting Problem

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll m;
bool salah(pair<string, ll> a, pair<string, ll> b)
{
    for (ll i = 0; i < m; i++)
    {
        if (a.first[i] == b.first[i])
        {
            continue;
        }

        if (i % 2 == 0)
        {
            if (a.first[i] < b.first[i])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            if (a.first[i] > b.first[i])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    return false;
}

void solve()
{
    ll n;
    cin >> n >> m;
    vector<pair<string, ll>> v1(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i].first;
        v1[i].second = i + 1;
    }
    sort(v1.begin(), v1.end(), salah);

    for (auto x : v1)
    {
        cout << x.second << " ";
    }
    cout << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}