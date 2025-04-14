// A. Calculating Function
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
     /*
     f(n) =  - 1 + 2 - 3 + .. + ( - 1)^ n * n .
     f(4) = -1 + 2 -3 + 4 = 2 
     output is 2 
     f(4) = -1 + 2 -3 + 4 -5 = -3
     output is -3 
     ========================
     ! Note that .......
 
     f(4) = 2 
     num = 4 ,,,,  output = 2  ,,,,,       4 / 2  = 2 ==(output)
     
     f(5) = -3 
     num = 5 ,,,,  output = -3  ,,,,,       5 / 2  = 2.5 (ignore furaction) == 2   (+1)  == 3    ==> *-1 ==(output) == -3
     steps for the second solution 
     num / 2 ,,,,  then + 1 for result  ,,,, then * -1 
     
     */
     long long num ;                cin >> num ;
 
     if(num % 2 == 0)        // even number 
     {
          cout<< num/2 <<endl;
     }
     else                    // odd number 
     {
          cout<<-1*((num / 2) + 1)<<endl;
     }
 
     
    return 0;
}
