// A. Don't Try to Count
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    int testCases;
    cin>>testCases;

    while(testCases--)
    {
        int num1,num2;
        cin>>num1>>num2;
        string s1,s2;
        cin>>s1>>s2;
        
        bool res =false ;
        for(int i =0 ; i<7 ; i++)
        {
            if(s1.find(s2)!= -1)
            {
                res =true;
                cout<<i<<endl;
                break;
            }
            s1+=s1 ;         // s1++;
        }
        if(!res)
        {
            cout<<-1<<endl;
        }
    }

    
   return 0 ;
}


