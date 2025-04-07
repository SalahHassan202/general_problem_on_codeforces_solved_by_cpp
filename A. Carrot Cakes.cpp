// A. Carrot Cakes
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
using namespace std;
int main()
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


    return 0;
}