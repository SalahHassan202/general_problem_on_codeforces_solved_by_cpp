// B. Hammouri and Digits


#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
  string s ; cin >> s ;
  string res ="";
  ll cnt = 0 ;
  for(int i = s.size()-1 ; i >= 0 ; i--) 
  {
    res+= s[i];
    cnt++;
    if(cnt%3 == 0 && i != 0)
    {
      res +="," ;
    }

  }
  reverse(res.begin() , res.end()) ;
  cout << res <<endl;
}
int main()
{
    // fast code
    ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(0);
    
    ll t = 1 ;
    // cin>> t ;
    while(t--)
    {
        solve();
    }
  
    
    return 0 ;
}