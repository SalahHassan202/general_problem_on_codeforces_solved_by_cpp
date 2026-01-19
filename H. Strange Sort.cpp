// H. Strange Sort

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
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    unordered_map<ll, ll> freq;
    for (ll x : a)
    {
        freq[x]++;
    }

    sort(a.begin(), a.end(), [&](ll x, ll y)
         {
        if (freq[x] != freq[y])
        {
            return freq[x] < freq[y];
        }
               
        return x > y; });

    for (ll x : a)
    {
        cout << x << " ";
    }

    cout << "\n";
}

int main()
{
    fast;

    solve();

    return 0;
}
