// C. Family debate

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll q;
    cin >> q;
    deque<char> d;
    char last = '?';

    for (int i = 1; i <= q; i++)
    {
        ll t;
        cin >> t;

        if (t == 1)
        {
            last = d.front();
            d.pop_front();
        }
        else if (t == 2)
        {
            last = d.back();
            d.pop_back();
        }
        else if (t == 3)
        {
            char c;
            cin >> c;
            d.push_front(c);
        }
        else if (t == 4)
        {
            char c;
            cin >> c;
            d.push_back(c);
        }

        if (d.empty())
        {
            cout << i << " " << last << endl;
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}