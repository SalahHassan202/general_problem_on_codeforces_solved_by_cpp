// A. Creating Words
# include <iostream>
using namespace std ;
int main()
{
    long long t ;       cin >> t ;
    string a , b ;

    while(t--)
    {
        cin >> a >> b ;
       
        cout <<b[0] << a[1] << a[2] <<  " " << a[0]<<b[1]<<b[2] << endl;
        
    }

    return  0 ; 
}