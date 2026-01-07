// F. Conan's new clock

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

using namespace std;

void solve()
{
    string s;
    cin >> s;
    string hh = s.substr(0, 2);
    string mm = s.substr(3, 5);

    if (hh == "00")
        cout << "12:" << mm << " AM" << endl;
    else if (hh < "12")
        cout << hh << ":" << mm << " AM" << endl;
    else if (hh == "12")
        cout << hh << ":" << mm << " PM" << endl;
    else
    {
        int h = (hh[0] - '0') * 10 + (hh[1] - '0');
        h -= 12;

        if (h < 10)
            cout << "0" << h;
        else
            cout << h;

        cout << ":" << mm << " PM" << endl;
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
