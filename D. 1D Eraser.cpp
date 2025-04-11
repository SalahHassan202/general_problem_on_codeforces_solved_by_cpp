// D. 1D Eraser
#include <iostream>
using namespace std;
int main(){

    int t ;
    cin>>t;

    while (t--)
    {
        int n ,k ;   // n ===>the length of the paper ;  k===>the integer used in the operation.
        cin>>n>>k;
        string s ;  // white or black  && B or W
        cin>>s;
        int ans =0 ;


        for(int i=0 ; i<n ;i++)
        {
            if(s[i]=='B')  // B (representing a black cell)   &&  W   (representing a white cell).
            {
                ans++ ;
                i = i+k -1 ;
            }
        }
        cout<<ans<<endl;
    }

    return 0 ;
}