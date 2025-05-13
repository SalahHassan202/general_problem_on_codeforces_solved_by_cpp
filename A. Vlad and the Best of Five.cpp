// A. Vlad and the Best of Five
#include iostream
#include string
#include iomanip                                  setprecision()
#include algorithm 
#include cmath
using namespace std;
int main()
{
    long long t ;              cin  t ;          testcases ;
    int counterA = 0 , counterB = 0 ;
    while(t--)
    {
        string word ;             cin  word ;
        for(int i = 0 ; i  word.size() ; i++)
        {
            if(word[i] == 'A')
            {
                counterA++ ;
            }
            else
            {
                counterB++ ;
            }
        }

        if(counterA  counterB)
        {
            cout  A  endl;
        }
        else
        {
             cout  B  endl;
        }

        counterA = 0 , counterB = 0 ;
    }
  

    return 0 ;
}