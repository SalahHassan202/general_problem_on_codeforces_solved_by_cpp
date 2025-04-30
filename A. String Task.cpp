// A. String Task
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string word , result ;               cin >> word ;

    for( int i =0 ; i< word.size() ; i++)
    {
        if(word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u' &&  word[i] != 'y' &&
             word[i] != 'A' && word[i] != 'E' && word[i] != 'I' && word[i] != 'O' && word[i] != 'U' &&  word[i] != 'Y' )
             {
                    result = result + '.' ;                        // inserts a character "." before each consonant
                    result = result + (char) towlower(word[i]) ;    // tolower make all letter is small_letter ;
             }
    }

    cout<< result <<endl;
  
    return 0;
}
