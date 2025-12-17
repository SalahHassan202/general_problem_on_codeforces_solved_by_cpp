// A. Game with Integers

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{	
    int n , t;        cin>>t;
	while(t--)
	{
		cin>>n ;
		
		if(n % 3 ==0 )
		{
			cout<<"Second"<<endl;
		}
		else
		{
			cout<<"First"<<endl;
		}
	}

}

int main()
{
    fast;

    solve();

    return 0;
}
