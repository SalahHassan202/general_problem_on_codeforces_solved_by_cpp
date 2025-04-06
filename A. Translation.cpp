// A. Translation
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s1, s2 ;
    cin >> s1 >> s2 ;

    // Reverse the string s
    reverse(s1.begin() , s1.end());

    // Check if the reversed s is equal to t
    if (s1 == s2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
