// A. Sereja and Dima
#include<iostream>
#include<string>
#include <cmath>
#include<algorithm>
using namespace std; 

int main()
{
	/*
	4
	4 1 2 10
	==============
	output is       12    5 

	how.....?
	x1 , x2 
	look at the right and the left and take the bigest number for x1 and the smalext number to x2
	x1 ==> take the bigest number 
	x2 ==> take the smallest number

	x1 ===> 10  then 2 ====> 12
	x2 ===> 4   then 1 ====> 5

	
	*/
	
	int cards ;           cin >> cards ;
	int arr[cards];
	for(int i = 0 ; i< cards ; i++)
	{
		cin >> arr[i] ;
	}
	int start = 0 , end = cards - 1 ,  player1 = 0 ,  player2 = 0 , game = 0 , max = 0  ;

	// start , end ===> using like a pointer to point to all element of the array to use them in comparing 
	// player1 , player2 ===> using it to refer the 2 player ( Sereja and Dima )
	// if the game is even ===> x1 play the game and take a number 
	// if the game is odd  ===> x2 play the game and take a number 



	while(start <= end )    // true 
	{
		if(arr[start] >= arr[end])
		{
			max = arr[start] ;
			start++;
		}
		else
		{
			max = arr[end] ;
			end-- ;
		}

		if( game % 2 == 0)
		{
			player1+= max ;
		}
		else
		{
			player2+= max ;
		}
		game++;
	}

	 cout<< player1 << " " << player2 << endl;




	return 0;
}



