// C. Suffix Structures

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;

    vector<int> ss(26, 0), tt(26, 0);
    for (char c : s)
    {
        ss[c - 'a']++;
    }
    for (char c : t)
    {
        tt[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (tt[i] > ss[i])
        {
            cout << "need tree" << endl;
            return;
        }
    }

    ll j = 0;
    for (char c : s)
    {
        if (j < (ll)t.size() && c == t[j])
        {
            j++;
        }
    }

    if (j == (ll)t.size())
    {
        cout << "automaton" << endl;
        return;
    }

    if (s.size() == t.size())
    {
        cout << "array" << endl;
        return;
    }

    cout << "both" << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}