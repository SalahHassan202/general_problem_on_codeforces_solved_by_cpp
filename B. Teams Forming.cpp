// B. Teams Forming
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    /* 
    first example...

    6                   number of students.
    5 10 2 3 14 5        the skill of students.
    output is 5 
    ==================================
    how....?
    ==================================
    number of student / 2  ====> the number of teams 
    6 / 2 = 3 
    then 
    sorting 
    2 3 5 5 10 14 
    (2,3) the first team     ===> difference is 3 - 2 = 1 
    (5,5) the second team    ===> difference is 5 - 5 = 0
    (10,14) the third team   ===> difference is 14 - 10 = 4
    1 + 4 = 5   ===> output
    ==============================================================================================
    second example...

    2
    1 100
    output is 99
    ==================================
    how...?
    ==================================
    2 / 2 = 1
    sorting 
    1 100 
    teams 
    (1,100) 
    output is 100 - 1 = 99

    
    */

   int number_of_people , skills ;
   cin >> number_of_people ;
    int arr[number_of_people] ;

   for (int i = 0; i < number_of_people ; i++ )
    {
		cin >> arr[i];
    }

    sort(arr , arr+number_of_people) ;
    
    int res = 0;

	for (int i = 0 ; i < number_of_people ; i += 2 )
    {
		res += arr[i + 1] - arr[i];
	}
	
	cout << res << endl;
    
    return 0;
}