// A. Anton and Danik

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll games ;
    cin >> games ;
    string name ;
    cin>> name ;
    ll counterA = 0 , counterD = 0 ;

    for(int i = 0 ; i< name.size() ; i++)
    {
        if(name[i] == 'A')
        {
            counterA++;
        }
        else  // (name[i] == 'D')
        {
            counterD++;
        }
    }

    if(counterA > counterD)
    {
        cout<<"Anton"<<endl;
    }
    else if(counterA < counterD)
    {
        cout<<"Danik"<< endl;
    }
    else    // (counterA == counterD)
    {
        cout<<"Friendship"<<endl;
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
