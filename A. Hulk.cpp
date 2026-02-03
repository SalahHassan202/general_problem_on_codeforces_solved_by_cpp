// A. Hulk

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    int num ; 
    cin >> num ;

    string feeling = "I hate";

    for (int i = 2; i <= num  ; i++)
    {
        if (i % 2 == 0)
        {
            feeling += " that I love" ;
        } 
        else
        {
            feeling += " that I hate" ;
        }
    }

    cout << feeling << " it" << endl ;

}

int main()
{
    fast;

    solve();

    return 0;
}
