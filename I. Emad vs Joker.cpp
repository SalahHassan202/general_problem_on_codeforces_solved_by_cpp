// I. Emad vs Joker

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
    if (n % 4 == 0)
        cout << "Joker\n";
    else
        cout << "Emad\n";
}

int main()
{
    fast;

    solve();

    return 0;
}
