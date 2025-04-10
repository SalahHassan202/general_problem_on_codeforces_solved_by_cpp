// A. YES or YES?
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main ()
{
    int testCases ;             cin >> testCases ;
    string word ; 
    while(testCases--)
    {
        cin >> word ;
        // Convert the string to lowercase
        transform(word.begin(), word.end(), word.begin() , ::tolower);

        if( word == "yes" )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}