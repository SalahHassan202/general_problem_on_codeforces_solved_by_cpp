// E. "karamellaah loves you".

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
    ll a = n / 10; // first number
    ll b = n % 10; // second number

    if (b != 0 && a % b == 0)
        cout << "YES" << endl;
    else if (a != 0 && b % a == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}