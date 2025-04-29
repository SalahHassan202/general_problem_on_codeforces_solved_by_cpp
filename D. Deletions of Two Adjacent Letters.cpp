// D. Deletions of Two Adjacent Letters
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{

    /*
    case (1)
    Input:
    abcde
    c

    Output:
    YES

    Explanation:
    s = "abcde", and we need to make s = "c". 
    Delete the first two letters: "ab" -> s = "cde".
    Delete the last two letters: "de" -> s = "c".
    Now, s = "c", so the output is YES.
    ===============================================
    case (2)
    Input:
    abcde
    b

    Output:
    NO

    Explanation:
    s = "abcde", and we need to make s = "b". 
    It is not possible to achieve this because the letters 'a' and 'c' cannot be removed together in one operation.
    ===============================================
    case (3)
    Input:
    x
    y

    Output:
    NO

    Explanation:
    s = "x", and we need to make s = "y". 
    It is not possible to achieve this because there are no adjacent letters to delete and get 'y'.
    ===============================================
    case (4)
    Input:
    aaaaaaaaaaaaaaa
    a

    Output:
    YES

    Explanation:
    s = "aaaaaaaaaaaaaaa", and we need to make s = "a". 
    Delete any adjacent pair of letters repeatedly until s becomes "a".
    ===============================================
    case (5)
    Input:
    contest
    t

    Output:
    YES

    Explanation:
    s = "contest", and we need to make s = "t". 
    Delete the first two letters: "co" -> s = "ntest".
    Delete the last two letters: "st" -> s = "nt".
    Delete the first two letters: "nt" -> s = "t".
    Now, s = "t", so the output is YES.
    ===============================================
    
    */


	int t ;               cin >> t ;    // testCases ;
    for(int i = 0 ; i < t ; i++)
    {
        string s ;                 char c ; 
        cin >> s >> c ;

        bool valid = false ;   
        for(int j = 0 ; j < s.size() ; j++)
        {
            if(s[j] == c)
            {
                int next =( s.size() - j - 1) ;

                if (next % 2 == 0)
                {
                    valid = true ;
                }
            }
        }
        

        if(valid)
        {
            cout<< "YES" << endl;
        }
        else
        {
            cout<< "NO"<< endl;
        }

    }
    return 0;
}