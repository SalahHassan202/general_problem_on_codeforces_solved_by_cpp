// A. Amazing People

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n > 0 && n <= 5)
    cout << "Languages" << endl;
    else if (n == 6 || n == 7)
    cout << "Read and Write" << endl;
    else if (n >= 8 && n <= 12)
    cout << "Robotics" << endl;
    else if (n >= 13 && n <= 19)
    cout << "Programming and Robotics" << endl;
    else
    cout << "Read about everything" << endl;
}

int main()
{
    fast;

    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":" << endl;
        solve();
    }

    return 0;
}
