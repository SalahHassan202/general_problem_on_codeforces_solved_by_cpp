// A. Boy or Girl
#include<iostream>
#include<string>
#include <cmath>
#include<algorithm>
using namespace std; 

int main()
{

	string name ;           cin >> name ;
	int counter = 0 , flag = 1 ;
	for(int i = 0 ; i< name.size() ; i++)
	{
		for(int j = i + 1 ; j < name.size() ; j++)
		{
			if(name[i] == name[j] )
			{
				flag = 0 ;
				break;
			}
		}

		if (flag) // == 0 
		{
			counter++;
		}
		else
		{
			flag = 1 ;
		}

	}


	if (counter % 2 == 0)    // even 
	{
		cout<< "CHAT WITH HER!"<< endl;
	}
	else
	{
		cout<<"IGNORE HIM!" << endl;
	}




	return 0;
}



