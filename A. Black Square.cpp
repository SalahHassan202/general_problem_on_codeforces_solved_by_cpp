// A. Black Square
#include<iostream>
#include<string>
#include <cmath>
#include<algorithm>
using namespace std; 

int main()
{
	
	/*
	give you four squares if you click on any square you lose point 
	he wants you to calculate the points that you lose 
	==========================================
	1 2 3 4
	123214
	=============
	1 2 3 4 ===> four square 
	if you click on square 1 you lose 1 
	if you click on square 2 you lose 2 
	if you click on square 3 you lose 3 
	if you click on square 4 you lose 4

	he clicks at 123214 
	solution is     1 + 2 + 3 + 2 + 1 + 4 = 13

	output is 13 

	===========================================================

	another example 

	1 5 3 2
	11221
	=============
	1 5 3 2  ===> four square 
	if you click on square 1 you lose 1 
	if you click on square 2 you lose 5 
	if you click on square 3 you lose 3 
	if you click on square 4 you lose 2

	he clicks at 11221
	solution is     1 + 5 + 5 + 1 + 1 = 13

	output is 13

	===========================================================


	*/
	
	int arr[5] ;  // four square in the game ;     i write [5]  to make the length of array is bigger than four 

	for(int i = 1 ; i <= 4 ; i++)
	{
		cin >> arr[i] ;
	}

	string num ;         cin >> num ;
	int sum = 0 ; 
	for(int i = 0 ; i < num.size() ; i++)
	{
		sum+= arr[num[i] - '0'] ;
	}

	cout<< sum << endl;



	return 0;
}



