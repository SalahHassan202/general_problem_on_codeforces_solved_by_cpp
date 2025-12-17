// A. Creating Words

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    
    ll t ;       cin >> t ;
    string a , b ;

    while(t--)
    {
        cin >> a >> b ;
       
        cout <<b[0] << a[1] << a[2] <<  " " << a[0]<<b[1]<<b[2] << endl;
        
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
