// A. Soldier and Bananas
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
	/*
	3 17 4    =====> input 
	13        =====> output 

	solution 
	 k , n ,w    ====> variables
	 k =====>    k dollars for the first banana, 2k dollars for the second.
	 n =====>    initial number of dollars the soldier has.
	 w =====>    number of bananas he wants.


	 soldier wants to buy 4 banana he has 17 dollars and the price of one banana is 3 
	 the total price is ===> // k dollars for the first banana, 2k dollars for the second.
	 1*3 + 2*3 + 3*3 + 4*3 == 30 
	 he has 17 
	 30 - 17 == 13 
	 he wants to borrow 13 dollars 

	*/

	int k , n ,w , sum = 0 ;
	cin>> k >> n >> w ;
	// i wan t to know the price of all banana and sub it from the money that soldiar has .
	for(int i =1 ; i <= w ; i++)
	{
		sum+= k*i ; 
	}

	if(sum <= n)
	{
		cout<<0 <<endl;
	}
	else
	{
		cout<<sum-n <<endl;
	}

	return 0;
}