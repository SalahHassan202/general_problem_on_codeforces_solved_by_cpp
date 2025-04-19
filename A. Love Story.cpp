// A. Love Story
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
	int t ;     cin >> t;
	string s1 = "codeforces" ;
	string s2 ;
	int counter = 0 ; 

	while(t--)
	{
		cin>> s2 ;
		for (int i =0 ; i< 10 ; i++)
		{
			if( s2[i] != s1[i])
			{
				counter++;
			}
		}
		cout << counter <<endl;

		counter = 0 ;
	}
	

	return 0;
}