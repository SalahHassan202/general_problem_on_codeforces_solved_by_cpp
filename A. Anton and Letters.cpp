// A. Anton and Letters
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;
int main()
{
	string s1 ;             
	getline(cin , s1) ; // to get the string if the string exisit a spaces ;
	set <char> letters ;       // make a set ===> {1 , 2 , 3 , 4, 5 , 6} ===> this is a set 
	for(int i = 0 ; i< s1.size() ; i++)
	{
		if(s1[i] != '{' && s1[i] != '}' && s1[i] != ',' && s1[i] != ' ')
		{
			// ignore for ===> "{" , "}" , "," , " " ;
			letters.insert(s1[i]) ;
		}
		
	}

	cout<< letters.size() << endl;

    return 0;
}