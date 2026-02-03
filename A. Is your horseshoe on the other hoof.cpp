// A. Is your horseshoe on the other hoof?

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
	// int horse1 , horse2 , horse3 , horse4 ; 
	// cin >> horse1 >> horse2 >> horse3 >> horse4 ;

	int arr[4] ;  int counter = 0 ;
	for(int i = 0 ; i< 4 ; i++ )
	{
		cin >> arr[i] ;
	}

	sort(arr , arr + 4) ;

	for(int i = 0 ;i < 4 ; i++)
	{
		if(arr[i] == arr[i+1])
		{
			counter++;
		}
	}

	cout << counter << endl;

}

int main()
{
    fast;

    solve();

    return 0;
}




