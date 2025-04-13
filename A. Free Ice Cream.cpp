// A. Free Ice Cream
#include <iostream>
#include <string>
using namespace std;
int main()
{


    long long cases , iceCream ;
	cin >> cases >> iceCream ;

	long long counter = 0 ;

	for (int i =0 ; i < cases ; i++)
	{
		char oper;      long long num ;
		cin >> oper >> num ;

		if( oper == '+')
		{
			iceCream+= num;            // iceCream = iceCream + num ;
		}
		else       //  (oper == '-')
		{
			if( iceCream >= num)
			{
				iceCream-=num ;       // iceCream = iceCream - num ;
			} else
			{
				counter++;
			}
		}
	}
	
	cout<< iceCream <<" "<< counter << endl;


    return 0 ;
}