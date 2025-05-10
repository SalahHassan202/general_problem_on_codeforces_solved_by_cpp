// A. Police Recruits
#include<iostream>
#include<string>
#include <cmath>
#include<algorithm>
using namespace std; 

int main()
{
	/*
	3
	-1 -1 1
	-------------
	output 
	2
	-------------
	how....?
	=============
	crimes = 0  , police = 0 ;
	input is 
	-1 -1 1 
	-1 ====> crime 
	1 ====> police 
	i want to calculate  the number of crimes which will go untreated.
	===================================================================
	* 
	-1 -1 1 
	===> 2 crimes 1 police 
	
	*/

	int size ;          cin >> size ;
	int crimes = 0 , police = 0 ; 
	for(int i = 0 ; i< size ; i++)
	{
		int num ;          cin >> num ;

		if(num == -1)
		{
			if(police > 0)
			{
				police-- ;
			}
			else
			{
				crimes++;
			}
		}
		else
		{
			police+=num;    // police = police + num ;
		}

	}

	cout << crimes << endl;

	
	return 0;
}



