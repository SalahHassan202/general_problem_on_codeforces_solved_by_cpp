// A. Division?

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll t ;           cin >> t ; 
   ll rate ;
   while(t--)
   {
        cin >> rate ;

        if(rate <= 1399)
        {
            cout<<"Division 4"<<endl;
        }
        else if (rate >= 1400 && rate <= 1599 )
        {
            cout<<"Division 3" <<endl;
        }
        else if (rate >= 1600 && rate <= 1899 )
        {
            cout<<"Division 2" <<endl;
        }
        else if ( rate >= 1900 )
        {
            cout<<"Division 1" <<endl;
        }
   }

}

int main()
{
    fast;

    solve();

    return 0;
}
