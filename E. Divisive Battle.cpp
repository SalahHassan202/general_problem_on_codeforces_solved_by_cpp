// E. Divisive Battle

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

const int MAX_VALUE = 1e6 + 5;
int spf[MAX_VALUE];

void salah()
{
    iota(spf, spf + MAX_VALUE, 0);
    for (int i = 2; (ll)i * i < MAX_VALUE; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j < MAX_VALUE; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }
}

struct Prime
{
    int mn1, mx1;
    bool pp;
};

Prime func(int n)
{
    if (n == 1)
    {
        return {0, 0, true};
    }

    int fp = spf[n];
    int mn1 = fp;
    int mx1 = fp;
    bool ok2 = true;

    while (n > 1)
    {
        int p = spf[n];

        if (p != fp)
        {
            ok2 = false;
        }

        mx1 = max(mx1, p);
        mn1 = min(mn1, p);

        while (n % p == 0)
        {
            n /= p;
        }
    }

    return {mn1, mx1, ok2};
}

void solve()
{
    ll n;
    cin >> n;

    vector<ll> v(n);

    for (auto &x : v)
    {
        cin >> x;
    }

    bool ok = true;

    for (int i = 0; i + 1 < n; i++)
    {
        if (v[i] > v[i + 1])
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        cout << "Bob" << endl;
        return;
    }

    vector<Prime> info(n);
    for (int i = 0; i < n; i++)
    {
        info[i] = func(v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (!info[i].pp)
        {
            cout << "Alice" << endl;
            return;
        }
    }

    for (int i = 0; i + 1 < n; i++)
    {
        if (info[i].mx1 > info[i + 1].mn1)
        {
            cout << "Alice" << endl;
            return;
        }
    }

    cout << "Bob" << endl;
}

int main()
{
    fast;

    salah();

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}