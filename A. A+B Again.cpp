// A. A+B Again?
#include<iostream>
using namespace std;
int main()
{
     int t ;                  cin>> t ;
     int num ; 
     while(t--)
     {
        cin >> num ; 
        int z = num /10 ;
        int x = num-10*z ; 
        cout << x + z << endl;
        // 77     ===> 77 / 10 == 7     ;;;      77 -10*7 == 7        ///  7 + 7 = 14 
        
    }

    return 0 ; 
}