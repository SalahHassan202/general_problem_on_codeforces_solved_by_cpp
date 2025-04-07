// A. Team
#include<iostream>
#include<string>
#include <cmath>
#include<algorithm>
using namespace std; 

int main()
{
	int questions , counter = 0 ;
	cin >> questions ;
	for(int i = 0 ; i< questions ; i++)
	{
		int student1 , student2 , student3 ;
		cin >> student1 >> student2 >> student3 ;
		int result = student1 + student2 + student3 ;
		if(result >= 2 )
		{
			counter++ ;
		}
	}

	cout<< counter << endl;
	return 0;
}