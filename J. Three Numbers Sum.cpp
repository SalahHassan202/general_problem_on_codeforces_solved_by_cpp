// J. Three Numbers Sum

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    int k, s;
    cin >> k >> s;

    int cnt = 0;

    for (int x = 0; x <= k; ++x)
    {
        for (int y = 0; y <= k; ++y)
        {
            int z = s - x - y;

            if (z >= 0 && z <= k)
                cnt++;
        }
    }

    cout << cnt;
}

int main()
{
    fast;

    solve();

    return 0;
}
