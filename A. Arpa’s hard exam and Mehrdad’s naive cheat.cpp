// A. Arpa’s hard exam and Mehrdad’s naive cheat

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    /*
    the idea of solution is ....
    1 % 4 = 1
    2 % 4 = 2
    3 % 4 = 3
    4 % 4 = 0
    5 % 4 = 1
    6 % 4 = 2
    7 % 4 = 3
    8 % 4 = 0
    ======================================
    if n = 1 
    1738   ===> print the last digit is 8 
    output is 8 
    (1 (input), 8 (output))
    
    if n = 2 
    1738 * 1738 = 1898884   ===> print the last digit is 4 
    output is 8 
    (2 (input), 4 (output))
    
    if n = 3 
    1738 * 1738 * 1738 = 2616662152  ===> print the last digit is 2 
    output is 8 
    (3 (input), 2 (output))
    
    if n = 4 
    1738 * 1738 * 1738 * 1738 = 3605760445456    ===> print the last digit is 6 
    output is 8 
    (4 (input), 6 (output))
    
    if n = 5 
    1738 * 1738 * 1738 * 1738 * 1738 = 4968737893838368    ===> print the last digit is 8
    output is 8 
    (5 (input), 8 (output))
    ======================================
    this is a sequence like this sequence 
    1 % 4 = 1
    2 % 4 = 2
    3 % 4 = 3
    4 % 4 = 0
    ======================================
    
    */

    ll n ;              cin >> n ;         // n  ====>  any number
    if(n == 0)
    {
        cout<< 1 << endl;
        return  ; 
    }

    if(n % 4 == 0)
    {
        cout<< 6 << endl;
    }
    else if(n % 4 == 1)
    {
        cout<< 8 << endl;
    }
    else if(n % 4 == 2)
    {
        cout<< 4 << endl;
    }
    else if(n % 4 == 3)
    {
        cout<< 2 << endl;
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
