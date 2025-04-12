// A. Fafa and his Company
#include <iostream>
#include <string>
#include <iomanip>                                //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;
int main()
{
    int num ;              // the number of employees
    cin >> num ; 
    int result = 0 ;
    for(int i = 1 ; i < num ; i++)        // i <= num      ===> if i want to put it we need to say ===>   if(num != i && (num - i ) % i == 0)
    {
        if((num - i ) % i == 0)
        {
            result++;
        }
    }

    cout << result << endl;
	

    return 0 ;
}