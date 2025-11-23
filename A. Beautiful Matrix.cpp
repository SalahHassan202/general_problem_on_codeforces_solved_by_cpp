// A. Beautiful Matrix
#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    int num , moves = 0 ;
    for(int i = 1 ; i <= 5 ; i++)
    {
        for( int j =1 ; j <= 5  ; j++)
        {
            cin >> num ;

            if (num == 1)
            {
                moves = abs(i - 3 ) + abs(j -3);
            }
        }
    }

    cout<< moves << endl;
   
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
