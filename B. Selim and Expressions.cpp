// B. Selim and Expressions
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c ; 
    cin >> a >> b >> c ;

    // Calculate the maximum value 
    cout<< max({a + b + c, a * (b + c), a * b * c, (a + b) * c});

    

    return 0;
}