// A. Carrot Cakes

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    	int n , t , k , d ;      
	// n ====> the number of cakes needed, 
	// t ====> the time needed for one oven to bake k cakes,
	// k ====> the number of cakes baked at the same time,
	// d ====>  the time needed to build the second oven.

	cin >> n >> t >> k >> d ;

	int time = (t + d ) / t ;

	if (time * k < n)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}

}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
