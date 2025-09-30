// A. SpongeBob's Exam

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
   ll t , n ;   cin  >> t >> n ;
   if(t>= n)
   cout << "Passed :)"<<endl;
   else
   cout<< "Failed :("<<endl;
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