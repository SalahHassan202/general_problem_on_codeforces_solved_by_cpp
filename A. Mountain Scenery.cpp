// A. Mountain Scenery
#include <iostream>
#include <string>
#include <iomanip>                                  //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;

int main()
{
    /*
    3 2                  ===> 3 number of mountain && 2 is the top of the mountain 
    0 5 3 5 1 5 2        ===> 3 * 2 + 1 = 7        ====> i have a 7 points    ===>    0 5 3 5 1 5 2
    ================
    لو في نقطه اعلي من الي قبلها والي بعدها بنقص واحد 
    فيكون الناتج هكذا 
    0 5 3 4 1 4 2 
    or
    0 4 3 4 1 5 2
    
    */
    int mountain , top ;          // mountian ==> number of mountain  && top ===> is the top of the mountain 
    cin >> mountain >> top ;
    int points = ((mountain * 2 ) + 1 );
    int ar[points] ;

    for(int i = 0 ; i < points ; i++)
    {
        cin >> ar[i] ; 
    }

    for(int i = 1 ; i < points ; i++)
    {
        if(ar[i] > ar[i - 1]  + 1 && ar[i] > ar[i + 1] + 1)    // put + 1 in this case to ===> عشان اضمن ان العنصر الي انا ةاقف عنده اكبر من الي قبه و اكبر من الي بعده
        {
            ar[i]-- ;
            top--;

            if(top == 0)
            {
                break ;
            }
        }
    }

    for(int i = 0 ; i < points ; i++)
    {
       cout << ar[i] <<" " ; 
    }


    return 0 ;
}