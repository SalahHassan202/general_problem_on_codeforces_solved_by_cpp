// Q. cAPS lOCK

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
    bool flag = true;
    for (int i = 1; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            flag = false;
        }
    }
    if (flag)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (isupper(s[i]))
            {
                cout << char(tolower(s[i]));
            }
            else
            {
                cout << char(toupper(s[i]));
            }
        }
    }
    else
    {
        cout << s << '\n';
    }
}

int main()
{
    fast;

    solve();

    return 0;
}