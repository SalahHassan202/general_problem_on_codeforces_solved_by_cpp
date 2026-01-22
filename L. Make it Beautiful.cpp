// L. Make it Beautiful

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

struct pr
{
    int x, y;
};

bool comp(const pr a, const pr b)
{
    return a.x < b.x;
}

const int N = (int)(1e4 + 5);

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[51] = {0}, cpy[51] = {0};
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        bool turn = 0;
        int st = 0, ed = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (turn)
            {
                cpy[i] = arr[st++];
                turn = 0;
            }
            else
            {
                cpy[i] = arr[ed--];
                turn = 1;
            }
        }
        int score = 0;
        bool f = 1;
        for (int i = 1; i < n; i++)
        {
            score += cpy[i - 1];
            if (cpy[i] == score)
            {
                f = 0;
                break;
            }
        }
        if (f)
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                cout << cpy[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}
