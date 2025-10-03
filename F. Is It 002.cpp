// F. Is It 002

#include<bits/stdc++.h>
#define ll long long
using namespace std ;

void solve()
{
  ll a , b , c ;      
  char s , eq ; 
  cin >> a >> s >> b >>eq>> c ; 
    ll correct ;
    if (s == '+') correct = a + b;
    else if (s == '-') correct = a - b;
    else if (s == '*') correct = a * b;

    
   if (correct == c) cout << "Yes\n";
    else cout << correct << "\n";

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