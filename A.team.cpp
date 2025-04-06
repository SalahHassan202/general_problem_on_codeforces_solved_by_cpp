// A.team

#include <iostream>

using namespace std;

int main()
{
    int n, Petya, Vasya, Tonya, number(0);
    cin >> n;
   
    for(int i=0; i<n ; i++)
    
    {
        cin >> Petya >> Vasya >> Tonya;
        if (Petya + Vasya + Tonya >= 2)
        {
            number += 1;
        }
    }
    cout << number << endl;
    return 0;
}



