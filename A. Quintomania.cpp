// A. Quintomania

#include <iostream>
#include <vector>
#include <cmath>  
using namespace std;

int main()
{
    int t;             cin >> t;
    
    while (t--)
    {
        int size;                  cin >> size;  
        vector<int> arr(size);

        for (int i = 0; i <size ; i++)
        {
            cin >> arr[i];   
        }

        bool perfect = true;  

        for (int i = 1; i < size; i++)
        {

            if (abs(arr[i] - arr[i - 1]) != 5 && abs(arr[i] - arr[i - 1]) != 7) {
                perfect = false ;
                break;
            }
        }

        if (perfect)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
    return 0;
}
