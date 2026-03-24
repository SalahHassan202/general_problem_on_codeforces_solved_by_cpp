// H. Weather

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n;
    cin >> n;
    vector<ll> v1(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    vector<ll> v2(n, 0), v3(n, 0);
    ll a = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v1[i] >= 0)
        {
            a++;
        }
        v2[i] = a;
    }

    ll b = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (v1[i] <= 0)
        {
            b++;
        }
        v3[i] = b;
    }

    ll ans = n + 1;
    for (ll i = 0; i < n - 1; i++)
    {
        ll c = v2[i] + v3[i + 1];
        if (c < ans)
        {
            ans = c;
        }
    }
    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}

/// another solution
/*

// H. Weather

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n ;           cin >> n ;
    vector<ll> v1(n) ;
    for (ll i = 0 ; i < n ; i++)
    {
        cin >> v1[i] ;
    }

    ll r = 0 ;
    for (ll i = 0 ; i < n ; i++)
    {
        if (v1[i] <= 0)
        {
            r++ ;
        }
    }

    ll ans = 1e18 , l = 0 ;
    for (ll i = 0 ; i < n - 1 ; i++)
    {
        if (v1[i] >= 0)
        {
            l++;
        }
        if (v1[i] <= 0)
        {
            r--;
        }
        ans = min(ans , l + r) ;
    }
    cout << ans << endl ;
}

int main()
{
    fast ;


    solve() ;


    return 0 ;
}

*/