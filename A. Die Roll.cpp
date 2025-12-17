// A. Die Roll

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
	die roll ===> 6 
	{"6/6" , "5/6" , "4/6" , "3/6" , "2/6" , "1/6"} ;
	After simpliy......
	{"1/6" , "1/3" , "1/2" , "2/3" , "5/6" , "1/1"} ;

	*/

	int x , y ; 
	cin >> x >> y ;
	string arr[6] = {"1/6" , "1/3" , "1/2" , "2/3" , "5/6" , "1/1"} ;
	int maxValue = max(x,y) ;
	cout<< arr[6 - maxValue ]<< endl;

}

int main()
{
    fast;

    solve();

    return 0;
}
