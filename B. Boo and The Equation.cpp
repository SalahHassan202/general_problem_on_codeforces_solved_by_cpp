// B. Boo and The Equation

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
    double x , y , z ; 
    cin >> x >> y >> z ;
    double res = ((2*x) + (3*y))*(5*z) ;
    cout << fixed <<setprecision(6)<< res << endl;


}
int main()
{
    // fast code
    ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(0);
    
    ll t = 1 ;
    //cin>> t ;
    while(t--)
    {
        solve();
    }
  
    
    return 0 ;
}