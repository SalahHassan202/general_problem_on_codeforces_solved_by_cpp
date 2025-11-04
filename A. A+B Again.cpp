//  A. A+B Again?

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
     int t ;                  cin>> t ;
     int num ; 
     while(t--)
     {
        cin >> num ; 
        int z = num /10 ;
        int x = num-10*z ; 
        cout << x + z << endl;
        // 77     ===> 77 / 10 == 7     ;;;      77 -10*7 == 7        ///  7 + 7 = 14 
        
    }

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
