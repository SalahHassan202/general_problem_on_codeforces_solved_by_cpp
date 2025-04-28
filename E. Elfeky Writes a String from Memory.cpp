// E. Elfeky Writes a String from Memory
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{

    long long t;      cin >> t ;     //  testCases;
    while(t--)
    {
        string word , temp ;       
        cin >> word ;
        int counter = 1 ;
        for(int i = 0 ; i < word.size() ; i++)
        {
            if(temp.find(word[i]) != -1)      // find ===> return index       ||   not find ===> return -1 
            {
                continue ;
            }
            else 
            {
                if(temp.size() == 3 )   
                {
                    temp.clear() ;            // clear all value in the string
                    // temp = " " ;           // empty string
                    counter++;
                }
                temp+=word[i] ;
            }

        }
       
        cout<< counter << endl;
        counter = 0 ;
        
    }


    return 0;
}