// A. Sum
#include<iostream>
using namespace std;
int main()
{
    int  t , a , b , c;            cin >> t;
    string res[10000];

    for (int i=0; i<t; i++)
    {
        cin >> a >> b >> c;

        if (a+b==c || b+c==a || a+c==b) 
        {
            res[i] = "YES";
        }
        else
        {
            res[i] = "NO";
        }
    }
    
    for (int i=0; i<t; i++)
    {
        cout << res[i] << endl;
    }
    
    return 0 ;

}