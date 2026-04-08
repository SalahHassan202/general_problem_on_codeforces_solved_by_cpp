// D. Secret Passwords

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

vector<ll> v;
ll salah(ll a)
{
    if (v[a] == a)
    {
        return a;
    }
    return v[a] = salah(v[a]);
}

void hassan(ll a, ll b)
{
    a = salah(a);
    b = salah(b);
    if (a != b)
    {
        v[a] = b;
    }
}

void solve()
{
    ll n;
    cin >> n;
    v.assign(26, 0);
    for (ll i = 0; i < 26; i++)
    {
        v[i] = i;
    }

    vector<ll> v1(26, 0);
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (auto x : s)
        {
            v1[x - 'a'] = 1;
        }
        for (ll j = 1; j < (ll)s.size(); j++)
        {
            hassan(s[0] - 'a', s[j] - 'a');
        }
    }

    set<ll> st;
    for (ll i = 0; i < 26; i++)
    {
        if (v1[i])
        {
            st.insert(salah(i));
        }
    }
    cout << st.size() << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}