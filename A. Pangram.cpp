// A. Pangram
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{

    /*

    all letter in english ::
    abcdefghijklmnopqrstuvwxyz
    ===============================
    first case 
    12
    toosmallword
    ===========
    output
    no 
    =========================================
    second case
    TheQuickBrownFoxJumpsOverTheLazyDog
    ==============
    output 
    yes
    --------------------------------------------------------
    the idea of solution ||||||||||||||||||||||||||||||||||
    --------------------------------------------------------
    check for size 
    if size < 26         print no
    if size > 26 
    make all letter small case 
    then sort it 
    if all string contain letter from a to z 
    print yes 

    */

    long long size ;               cin >> size ;
    string word ;                   cin >> word ;
    if (size < 26)
    {
        cout<<"NO"<<endl;
        return 0 ;
    }
 
    for(int i = 0 ; i < size ; i++)
    {
        word[i] = towlower(word[i]) ;              // make all letter in string is small ;
    }
    sort(word.begin(),word.end());
    long long counter = 0 ;

    for (int i = 0 ; i < size ; i++ )
    {

        if(word[i] != word[i + 1])
        {
            counter++ ; 
        }
    }

    if ( counter == 26)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0 ;
}