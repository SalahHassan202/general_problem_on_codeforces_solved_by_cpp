// C. Sum of Digits
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{

    /*
    How.....?

    the third test case (991):

    Initial Number: 991

    Sum of digits: 9 + 9 + 1 = 19
    First Transformation:

    New number: 19
    Sum of digits: 1 + 9 = 10
    Second Transformation:

    New number: 10
    Sum of digits: 1 + 0 = 1

    output is 1
    */
    string num ;                  cin >> num ;
    int counter = 0 ;
    while (num.size() > 1 )
    {
        int sum = 0 ;
        // Calculate the sum of digits
        for(int i =0 ; i< num.size() ; i++)
        {
            // we want to use int instead string so that we use ====>'0'   or    48 
            sum = sum + num[i] -'0' ;

        }
        num = to_string(sum) ;     // to_string ===> convert sring to int 
        counter++ ;     // the number of transformation (output)

    }

    cout<< counter << endl; 


    return 0;
}