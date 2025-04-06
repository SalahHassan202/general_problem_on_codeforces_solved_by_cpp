// A. Anton and Danik
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main ()
{
   
    long long games ;
    cin >> games ;
    string name ;
    cin>> name ;
    long long counterA = 0 , counterD = 0 ;

    for(int i = 0 ; i< name.size() ; i++)
    {
        if(name[i] == 'A')
        {
            counterA++;
        }
        else  // (name[i] == 'D')
        {
            counterD++;
        }
    }

    if(counterA > counterD)
    {
        cout<<"Anton"<<endl;
    }
    else if(counterA < counterD)
    {
        cout<<"Danik"<< endl;
    }
    else    // (counterA == counterD)
    {
        cout<<"Friendship"<<endl;
    }
   
   
    return 0;
}