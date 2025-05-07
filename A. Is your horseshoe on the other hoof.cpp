// A. Is your horseshoe on the other hoof?
#include<iostream>
#include<string>
#include <cmath>
#include<algorithm>
using namespace std; 

int main()
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




	return 0;
}



