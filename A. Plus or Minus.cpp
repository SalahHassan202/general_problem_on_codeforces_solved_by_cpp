// A. Plus or Minus
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   int testCases;              cin >> testCases ;
   int a , b , c ;     // three numbers 
   while(testCases--)
   {
        cin >> a >> b >> c ;
        if((a+b == c ))
        {
            cout<<"+"<<endl;
        }
        else
        {
            cout<<"-"<<endl;
        }
   }

    
    return 0;
}