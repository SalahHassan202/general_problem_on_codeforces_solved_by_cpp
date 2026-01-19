// F. Fake News (easy)

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
    string target = "heidi";
    int i = 0;
    for (char c : s)
    {
        if (c == target[i])
        {
            i++;
            if (i == target.size())
            {
                cout << "YES";
                return;
            }
        }
    }

    cout << "NO";
}

int main()
{
    fast;

    solve();

    return 0;
}
