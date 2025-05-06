// A. To My Critics
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    long long  t ;      cin >> t ;
    long long a , b , c ;             // three numbers 
    while (t--)
    {
        cin >> a >> b >> c ;
        if((a+b >= 10 )|| (a+c >= 10 )||( b+c >= 10))
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }


    return 0;
}