// D. Prime Fibonacci

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
    ll k = n + 1;

    set<ll> idx = {3, 4, 5, 7, 11, 13, 17, 23, 29, 43, 47};

    if (idx.count(k))
    {
        cout << "prime" << endl;
    }
    else
    {
        cout << "not prime" << endl;
    }
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