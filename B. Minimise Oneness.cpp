// B. Minimise Oneness
#include <iostream>
#include <vector>
#include <cmath>  
#include <string>
using namespace std;

int main()
{
    
    long long t;                    cin >> t;
    while(t--)
    {
        long long num;                     cin >> num;
        cout << '1';
        for(int i = 1; i < num; i++)
        {
            cout << '0';
        }
        cout << endl;
    }
    return 0;
}
