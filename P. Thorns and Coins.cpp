// P. Thorns and Coins

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

const int N = (int)(1e5 + 5);

struct pr
{
    int v, l;
};

bool comp(pr a, pr b)
{
    return ((double)a.v / a.l) > ((double)b.v / b.l);
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int score = 0;

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '@')
                score++;

            if (i + 1 < str.size() && (str[i + 1] == '@' || str[i + 1] == '.'))
                continue;
            else if (i + 2 < str.size() && (str[i + 2] == '@' || str[i + 2] == '.'))
                i++;
            else
                break;
        }
        cout << score << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}