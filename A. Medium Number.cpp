// A. Medium Number
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{

	// The medium number is the number that is neither the minimum nor the maximum of the given three numbers.
	
	long long cases ;        cin>> cases ;
	while (cases--)
	{
		long long arr[3];
		for(int i =0 ; i<3 ; i++)
		{
			cin>>arr[i];
		}

		sort(arr , arr+3) ;

		cout<<arr[1] <<endl;

	}

	return 0;
}