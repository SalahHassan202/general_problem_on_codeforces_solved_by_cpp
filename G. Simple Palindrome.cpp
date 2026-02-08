// G. Simple Palindrome

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll t;
    cin >> t;

    string s = "aeiou";

    while (t--)
    {
        ll n;
        cin >> n;

        ll x = n / 5;
        ll y = n % 5;

        for (int i = 0; i < 5; i++)
        {
            int cnt = x;
            if (i < y)
            {
                cnt++;
            }

            while (cnt--)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}