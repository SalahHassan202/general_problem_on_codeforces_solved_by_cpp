// H. Quick Sort

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    int x = 1, y = 0;

    for (int i = 0; i < n; i++)
    {
        if (p[i] == x)
        {
            y++;
            x++;
        }
    }

    int z = n - y;
    int w = (z + k - 1) / k;

    cout << w << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}