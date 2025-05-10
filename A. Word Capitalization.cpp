// A. Word Capitalization
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string word;                cin >> word;
    if (!word.empty() && islower(word[0]))
    {
        word[0] = toupper(word[0]);
    }


    cout << word << endl;



    return 0;
}
