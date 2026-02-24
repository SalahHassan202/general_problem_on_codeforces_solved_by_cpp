// B. Flipping Binary String

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
    string s;
    cin >> s;

    vector<ll> on, ze;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            on.push_back(i + 1);
        }
        else
        {
            ze.push_back(i + 1);
        }
    }

    if (ze.size() % 2 != 0)
    {
        cout << ze.size() << endl;
        for (int i = 0; i < (int)ze.size(); i++)
        {
            cout << ze[i];
            if (i < (int)ze.size() - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
        return;
    }

    if (on.size() % 2 == 0)
    {
        cout << on.size() << endl;
        for (int i = 0; i < (int)on.size(); i++)
        {
            cout << on[i];
            if (i < (int)on.size() - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
        return;
    }

    cout << "-1" << endl;
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