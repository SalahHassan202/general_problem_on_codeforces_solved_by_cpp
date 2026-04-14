// A. Minimize!

# include<iostream>
#include <cmath>              
using namespace std ;
int main()
{

    int t;              cin >> t ;
    int a, b ;

    for (int i = 0 ; i < t ; i++) 
    {
        cin >> a >> b;  
        cout << b - a << endl;  
    }

    return 0 ; 
}
