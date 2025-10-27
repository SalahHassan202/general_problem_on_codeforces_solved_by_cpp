// G. Abdelkader and C++
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
    ll c = 0;
    for (int i = 0; i < s.size();)
    {
        if (s[i] == 'c' && s[i + 1] == '+' && s[i + 2] == '+' && s[i + 3] == ';')
        {
            c++;
            i += 4;
        }
        else if (s[i] == '+' && s[i + 1] == '+' && s[i + 2] == 'c' && s[i + 3] == ';')
        {
            c++;
            i += 4;
        }
        else if (s[i] == 'c' && s[i + 1] == '-' && s[i + 2] == '-' && s[i + 3] == ';')
        {
            c--;
            i += 4;
        }
        else if (s[i] == '-' && s[i + 1] == '-' && s[i + 2] == 'c' && s[i + 3] == ';')
        {
            c--;
            i += 4;
        }
        else if (s[i] == 'c' && s[i + 1] == '=' && isdigit(s[i + 2]) && s[i + 3] == ';')
        {
            c = s[i + 2] - '0';
            i += 4;
        }
        else
        {
            i++;
        }
    }
    cout << c << endl;
}

int main()
{
    fast;

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}