// A. Beautiful Matrix
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    
    int num , moves = 0 ;
    for(int i = 1 ; i <= 5 ; i++)
    {
        for( int j =1 ; j <= 5  ; j++)
        {
            cin >> num ;

            if (num == 1)
            {
                moves = abs(i - 3 ) + abs(j -3);
            }
        }
    }

    cout<< moves << endl;
  
    return 0;
}
