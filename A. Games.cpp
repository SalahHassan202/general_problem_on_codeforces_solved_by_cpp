// A. Games
#include<iostream>
#include<string>
#include <cmath>
#include<algorithm>
using namespace std; 

int main()
{
	int number_of_teams , counter = 0 ;             cin >> number_of_teams ;
	int arr1[number_of_teams] ;
	int arr2[number_of_teams] ;

	for(int i = 0 ; i< number_of_teams ; i++)
	{
		cin >> arr1[i] ;
		cin >> arr2[i] ;
	}
	
	for(int i = 0 ; i < number_of_teams ; i++)
	{
		for(int j = 0 ; j < number_of_teams ; j++)
		{
			if(arr1[i] == arr2[j])      // if(arr1[i] == arr2[j] && i != j)  ==> i != j ===> every team have a different two color==> so that i want to compare the team with other teams not to the same team ===>(because i know that every team has tha diferrent color ) ===> (i != j  )===> use this to compare with other teams not the same team .....
			{
				counter++ ; 
			}
		}
	}

	cout<< counter << endl; 

	return 0;
}



