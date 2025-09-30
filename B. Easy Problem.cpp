// B. Easy Problem

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
    string a, b;
    cin >> a >> b;

    int x = (a.back() - '0');
    int y = (b.back() - '0');

    if ((x + y) % 2 == 0)
        cout << "Even." << endl;
    else
        cout << "Odd." << endl;
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