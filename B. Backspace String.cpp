// B. Backspace String

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

string build(string s)
{
    string res;
    for (char c : s)
    {
        if (c == '#')
        {
            if (!res.empty())
            {
                res.pop_back();
            }
        }
        else
        {
            res.push_back(c);
        }
    }
    return res;
}
void solve()
{
    string n, k;
    cin >> n >> k;
    if (build(n) == build(k))
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    fast;

    solve();

    return 0;
}