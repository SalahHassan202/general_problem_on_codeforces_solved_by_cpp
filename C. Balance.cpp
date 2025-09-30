// C. Balance


#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
  ll a , b ;  cin >> a >> b ;
  if(a >b)
  {
    cout<<a-b <<" " <<"R"<<endl;
  }
  else if(a<b)
  {
    cout<<b-a <<" " <<"L"<<endl;
  }
  else // a ==b 
  {
    cout <<0 << " " << "A" <<endl;
  }
}
int main()
{
    // fast code
    ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(0);
    
    ll t = 1 ;
    cin>> t ;
    while(t--)
    {
        solve();
    }
  
    
    return 0 ;
}