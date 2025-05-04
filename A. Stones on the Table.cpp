// A. Stones on the Table
#include<iostream>
#include<string>
#include <cmath>
#include<algorithm>
using namespace std; 

int main()
{

	int size , counter = 0 ;             cin >> size ;
	string color ;         cin >> color ;
	for(int i = 0 ; i< color.size() ; i++)
	{
		if(color[i] == color[i+1])
		{
			counter++; 
		}

	}

	cout<< counter << endl;

	return 0;
}




