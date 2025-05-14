// A. Bear and Big Brother 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 

int main()
{
	int num1 , num2 , counter = 0 ;          //  Bear and Big Brother (Bob)
	cin>> num1 >> num2 ;
	while(num1 <= num2)
	{
		num1*=3;
		num2*=2;
		counter++;
	}

	cout<< counter <<endl;

	return 0;
}