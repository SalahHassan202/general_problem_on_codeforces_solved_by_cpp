// A. Polo the Penguin and Segments
#include <iostream>
#include <string>
#include <iomanip>                                  //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;

int main()
{
    /*
    2 3
    1 2
    3 4
    =====================
    2 ===> tw0 pairs  &&    3   is the number i  want to  accept the division
    1 2 ===> the first pair
    3 4 ===> the second pair
    ======================
    output is 2 
    ======================
    how ???

    0 1 2 3 4 5 6 7 8 9         ===>  Number line
    0 1 2 3 4 x x ......

    انا عايز اطول الزوج المرتب عن طريق انقص كمه واحد
    او ازود منه واحد من اخره بشرط ان الرقم الي هزوده يقبل القسمه علي الرقم الي في المسأله الي هو 3 
    =============
    3 4 
    هزود واحد 
    هيكون الزوج المرتب كدا 
    3 5 
    لكن 5 مش بتقبل القسمه ف هضطر ازود كمان واحد فيكون كدا 
    3 6 
    6 تقبل القسمه علي 

    انا اتحركت خطوتين بس 
    مره من 4 لغايه 5 
    مره من 5 لغايه 6 

    output is 2 
    
    */
  

    long long lines , devision ;
    cin >> lines >> devision ;
    // y - x + 1 =======> the length of line

    long long length = 0 ;
    for(int i = 0 ; i < lines ; i++)
    {
        int x , y ;                   cin >> x >> y ;
        length += (y - x + 1) ;             // length = length + (y - x + 1) ;
    }

    length %=  devision ;               // length = length %  devision ;

    if( length == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout <<  devision - length <<endl;
    }


    return 0 ;
}