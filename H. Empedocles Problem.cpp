// H. Empedocles Problem

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string first, element, temp;

    for (int i = 0; i < 4; ++i)
    {
        cin >> temp;
        first += temp;
    }

    bool flag = true;

    for (int i = 1; i < n; ++i)
    {
        element = "";
        for (int j = 0; j < 4; ++j)
        {
            cin >> temp;
            element += temp;
        }

        if (element != first)
            flag = false;
    }

    cout << (flag ? "Empedocles was right" : "you were right") << '\n';
}

int main()
{
    fast;

    solve();

    return 0;
}
