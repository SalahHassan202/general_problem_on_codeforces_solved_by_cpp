// R. Shampoo

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

using namespace std;

void solve()
{
    ll V, A, B, C;
    cin >> V >> A >> B >> C;
    while (true)
    {
        if (V < A)
        {
            cout << "F\n";
            break;
        }
        V -= A;

        if (V < B)
        {
            cout << "M\n";
            break;
        }
        V -= B;

        if (V < C)
        {
            cout << "T\n";
            break;
        }
        V -= C;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}
