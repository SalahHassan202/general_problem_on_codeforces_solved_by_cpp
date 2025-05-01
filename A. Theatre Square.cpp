// A. Theatre Square
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    long long n , m , a ;
    cin >> n >> m >> a ;
    // Theatre Square has a rectangular shape with the size n × m meters.
    // Each flagstone is of the size a × a.
    // n * m   is the size of city   && a is the length of stone ===> square stone ===> a * a
    long long answer =  ((m + a - 1) / a)*((n + a - 1) / a) ;

    cout << answer << endl;
  
    return 0 ;
}