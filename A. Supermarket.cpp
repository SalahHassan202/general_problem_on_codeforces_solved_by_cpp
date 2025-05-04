// A. Supermarket
#include <iostream>
#include <string>
#include <iomanip>                                //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;
int main()
{

    /*
    
    Explanation :
    You want to buy 5 kilos of apples. In the first supermarket, the cost for 1 kilo is 1/2 yuan, 
    in the second supermarket, it's 3/4 yuan, and in the third supermarket, it's 1/3 yuan. To minimize the cost, 
    you would choose the third supermarket where the cost for 1 kilo is the lowest
    , which is 1/3 yuan. Therefore, the total cost for 5 kilos would be (1/3) * 5 = 1.66666667 yuan.

    */

    int n , m ;        // n ===> number of super market  ;   m ===> number of kilos of apples.
    cin >> n >> m ; 
    double result = 0.0 ;
    double temp = 0.0 ;
    for(int i = 0 ; i < n ; i++)
    {
        double a , b ;               // a ===>(information of supermarket) it is the first supermarket , second , third , .... etc    ;;;; b ===> the price of the killo
        // a , b ===> double not int  ===> result ==>  double but the a , b ==> int   ===> result must be int and i don't that ;;; so we make a , b are double 
        cin >> a >> b ;
        result = (a / b)   ;
        if(i == 0)
        {
            temp = result ; 
        }

        if(result <= temp )
        {
            temp = result ;
        }
    
    }
    cout << fixed << setprecision(8) <<  temp * m << endl;

    return 0 ;
}