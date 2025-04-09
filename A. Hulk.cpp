// A. Hulk
#include <iostream>
# include <string >
#include <algorithm>
using namespace std;
int main ()
{
    int num ; 
    cin >> num ;

    string feeling = "I hate";

    for (int i = 2; i <= num  ; i++)
    {
        if (i % 2 == 0)
        {
            feeling += " that I love" ;
        } 
        else
        {
            feeling += " that I hate" ;
        }
    }

    cout << feeling << " it" << endl ;

    return 0 ;
}