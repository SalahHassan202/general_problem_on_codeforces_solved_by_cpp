// A. Bear and Big Brother 
#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    int num1 , num2 , counter = 0 ;          //  Bear and Big Brother (Bob)
	cin>> num1 >> num2 ;
	while(num1 <= num2)
	{
		num1*=3;
		num2*=2;
		counter++;
	}

	cout<< counter <<endl;
   
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
