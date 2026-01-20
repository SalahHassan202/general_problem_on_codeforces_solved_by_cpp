// B. Weird Function 2

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;
string f(int x, string s1, string s2)
{
    return x == 1 ? s1 + s2 : s2 + s1;
}

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << f(1, f(1, f(0, s1, s2) + s1, s2), s1 + f(0, s1 + s2, f(1, s2, s1)));
}

int main()
{
    fast;

    solve();

    return 0;
}
