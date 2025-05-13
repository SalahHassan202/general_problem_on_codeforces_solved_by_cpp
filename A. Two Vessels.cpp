// A. Two Vessels

# include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main()
{

int lines ;
cin>>lines;

while (lines--)
{
    int a , b, c ;
    cin >>a>>b>>c;

    int ans =0; 
    ans =((abs(a-b)+1)/2+c-1)/c ;

    cout<<ans<<endl;
}



return 0;
}