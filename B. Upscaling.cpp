// B. Upscaling
#include <iostream>
#include <string>
#include <iomanip>                                  //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;
 
int main()
{
    long long t ;                       cin >> t ;             // testCases ;
    long long num ; 
    while(t--)
    {
        cin >> num ;

        for(int i = 0 ; i <  num ; i++)
        {
            for(int j = 0 ; j <  num ; j++)
            {
                if((i + j) % 2 == 0 )
                {
                    cout << "##" ;
                }
                else
                {
                    cout << ".." ;
                }
            }
            cout << endl; 
            
            for(int j = 0 ; j < num ; j++)
            {
                if((i + j) % 2 == 0 )
                {
                    cout << "##" ;
                }
                else
                {
                    cout << ".." ;
                }
            }
            cout << endl; 

        }

        
    }
  


    return 0 ;
}

