// A. Minimize!

# include<iostream>
#include <cmath>              
using namespace std ;
int main()
{

    int testCases ;              cin >> testCases ;
    int a, b ;

    for (int i = 0 ; i < testCases ; i++) 
    {
        cin >> a >> b;  
        cout << b - a << endl;  
    }


    return 0 ; 
}