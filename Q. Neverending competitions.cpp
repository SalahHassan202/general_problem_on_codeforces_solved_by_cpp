// Q. Neverending competitions

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

    ll cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
        string w;
        cin >> w;
        string a = w.substr(0, 3);
        string b = w.substr(5, 3);

        if (a == s)
        {
            cnt1++;
        }

        if (b == s)
        {
            cnt2++;
        }
    }

    if (cnt1 == cnt2)
    {
        cout << "home" << endl;
    }
    else
    {
        cout << "contest" << endl;
    }
}
int main()
{
    fast;

    solve();

    return 0;
}