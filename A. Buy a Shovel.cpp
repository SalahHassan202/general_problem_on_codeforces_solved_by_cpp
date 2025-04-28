// A. Buy a Shovel
#include<iostream>
#include<string>
#include <cmath>
#include<algorithm>
using namespace std; 

int main()
{
	/*
	11 3 
	-----------------
	i have an ulimated coin of 10 ===> 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 ,......etc 
	i can by ::
	1 ==> 11 (1 * 10 ) reminder 1 and i have 3 ===> i can't by it 
	2 ==> 22 (2 * 10 ) reminder 2 and i have 3 ===> i can't by it 
	3 ==> 33 (3 * 10 ) reminder 3 and i have 3 ===> i can by it 

	i can by 3 
	output is 3 
	*/

	int price , coins ;         cin >> price >> coins ;
	int counter = 0 ,  result = 0 ;
	while(1) // true
	{
		counter++; // counter = counter + 1 // counter = 0 + 1 = 1       // counter = 1 ; // i can by a one shovel
		result = price * counter ;

		if((result % 10 == 0) || (result % 10 == coins))
		{
			break;
		}
		// 30 % 10 == 0  ==> break;                            // result % 10 == 0
		// 33 % 10 == 3  ==> break;  ==> coins = 3            // result % 10 == coins
	}

	cout<< counter << endl;


	return 0;
}



