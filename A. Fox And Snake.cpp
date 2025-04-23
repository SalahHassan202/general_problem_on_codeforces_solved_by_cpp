// A. Fox And Snake
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{

	/*
	
	       **************** snake ********************* 
	###         
	..#       counter =1 ;  ===> # at index 2 && counter % 2 == 1
	###
	#..       counter =2 ;  ===> # at index 0  && counter % 2 == 0
	###
	..#       counter =3 ;   ===> # at index 2 && counter % 2 == 1
	###
	#..       counter =4 ;   ===> # at index 0  && counter % 2 == 0
	###
	
	
	*/
	int n , m , counter = 0  ;           cin >> n >> m ;
	
	for(int i =0 ; i< n ; i++)   // row
	{
		if (i % 2 == 0)   // even  ====> print #
		{
			for(int j =0 ; j < m ; j++)
			{
				cout<<"#";
			}
		}
		else             // odd 
		{
			counter++;
			for( int j =0 ; j < m ; j++) // column
			{
				if((counter % 2 == 0 && j == 0) || (counter % 2 == 1 && j == m - 1))
				{
					cout<<"#";
				}
				else
				{
					cout<<".";
				}
			}

		}
				cout<<endl;
	}



	return 0;
}