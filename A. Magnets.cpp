// A. Magnets
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{

	int num , counter = 1 ;         cin >> num ;
	int arr[100000];        // given in problem =====>     n (1 ≤ n ≤ 100000)

	for(int i =0 ; i < num ; i++)
	{
		cin>> arr[i] ; 
	}

	for(int i =0 ; i< num-1 ; i++)
	{
		if(arr[i] != arr[i+1])
		{
			counter++;
		}
	}

	cout<<counter <<endl;
   


	return 0;
}