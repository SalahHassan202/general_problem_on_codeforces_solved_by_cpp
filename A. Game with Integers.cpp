// A. Game with Integers
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num , cases;        cin>>cases;
	while(cases--)
	{
		cin>>num ;
		
		if(num % 3 ==0 )
		{
			cout<<"Second"<<endl;
		}
		else
		{
			cout<<"First"<<endl;
		}
	}

	
	return 0;
}