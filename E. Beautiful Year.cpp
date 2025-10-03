// E. Beautiful Year

#include<bits/stdc++.h>
#define ll long long
using namespace std ;

bool distinct(int y)
{
    string s = to_string(y) ;
    set<char> st(s.begin() , s.end()) ;
    return st.size() == s.size() ;
    
}

void solve()
{
    int y ; cin>> y ;
   while(true)
   {
        y++ ;
        if(distinct(y))
        {
            cout <<y << endl;
            break;
        }
   }
}
int main()
{
    // fast code
    ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(0);
    
    ll t = 1 ;
   //cin >> t ;
    while(t--)
    {
        solve();
    }
  
    
    return 0 ;
}