//  A. A+B?

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll t ;                   cin >> t ;
   while(t--)
   {
        ll n1 , n2 ;
        char s = '+' ;
        cin>> n1 >> s >> n2 ;
        cout << n1+n2 << endl;
   }

}

int main()
{
    fast;
    solve();


    return 0;
}
