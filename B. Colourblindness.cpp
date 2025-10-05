// B. Colourblindness

#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std ;

void solve()
{
    ll n ; cin >> n ;
    string s1 , s2 ;     cin >> s1 >> s2 ;
    for(int i =0;i<n ; i++)
    {
        if(s1[i] == 'R')
        {
            if(s2[i] != 'R')
            {
                cout << "NO" << endl;
                return;
            }
            
        }
        else
        {
            if(s2[i] == 'R')
            {
                cout<< "NO" << endl;
                return ;
            }
            
        }
       
    }
     cout << "YES"<< endl;
   
}
int main()
{
    fast;
    
    ll t = 1 ;
    cin >> t ;
    while(t--)
    {
        solve();
    }
  
    
    return 0 ;
}