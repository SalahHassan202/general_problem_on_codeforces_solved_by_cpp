// E. Beethoven

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll d, s, v, g;
    cin >> d >> s >> v >> g;

    ll total_sec = 270; // 4:30 ===> 270 second
    ll min = total_sec / 60;
    ll sec = total_sec % 60;

    cout << setfill('0') << setw(2) << min << ":" << setfill('0') << setw(2) << sec << endl;
}

int main()
{
    fast;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}