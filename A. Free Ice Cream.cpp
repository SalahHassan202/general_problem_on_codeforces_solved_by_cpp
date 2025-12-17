// A. Free Ice Cream

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{	
   ll cases , iceCream ;
	cin >> cases >> iceCream ;

	ll counter = 0 ;

	for (int i =0 ; i < cases ; i++)
	{
		char oper;      ll num ;
		cin >> oper >> num ;

		if( oper == '+')
		{
			iceCream+= num;            // iceCream = iceCream + num ;
		}
		else       //  (oper == '-')
		{
			if( iceCream >= num)
			{
				iceCream-=num ;       // iceCream = iceCream - num ;
			} else
			{
				counter++;
			}
		}
	}
	
	cout<< iceCream <<" "<< counter << endl;


}

int main()
{
    fast;

    solve();

    return 0;
}
