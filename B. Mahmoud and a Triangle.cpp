// B. Mahmoud and a Triangle
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{

	// TO MAKE A TRAINGLE YOU SHOULD MAKE THIS CONDITION
    // the sum of two side lengths of a triangle is always greater than the third side.
    
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0 ; i < size ; i++)
    {
        cin >> arr[i];
    }

    sort(arr , arr + size);

    for (int i = 0 ; i < size - 2 ; i++)
    {
        if (arr[i] + arr[i + 1] > arr[i + 2])
        {
            cout << "YES"<< endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}