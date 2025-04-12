// C. Can I Square?
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;
int main ()
{
    long long t ;            cin >> t ;
    long long sum = 0 ;
   
    while(t--)
    {
        long long  size ;             cin >> size ;
        for(int i = 0 ; i < size ; i++)
        {
            long long value ;        cin >> value ;
            sum+=value ;
        }

        long long root = sqrt(sum) ;
        if(root * root == sum)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        sum = 0 ;
    }


    
    return 0 ;
}