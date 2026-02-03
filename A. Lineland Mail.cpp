// A. Lineland Mail

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    /*
    
    4
    -5 -2 2 7
    ------------------
    output is 
    3 12
    3 9
    4 7
    5 12
    ------------------
    ------------------
    Print n lines, the i-th line must contain two integers mini, maxi,
    separated by a space, where mini is the minimum cost of sending a letter from the i-th city,
    and maxi is the maximum cost of sending a letter from the i-th city.
    ----------------------------------------------------
    solution is ::
    for the first element :: == -5
    -5 - (7 )= abs(-12) = 12 ===> max cost for the fist element 
    -5 - (-2 )= abs(-3) = 3 ===> min cost for the fist element 

    output is 
    3 12 

    go to the second element == -2 
    to see the most cost or min cost you should check for the elemnt between -2 
    and get the min 
    and like that max 
    


    go to the last element :: 7
    7 - (-5)= abs(-12) = 12 ===> max cost for the fist element 
    7 - (2 )= abs(5) = 5 ===> min cost for the fist element 

    output is 
    5 12 

    ===========================
    output is 
    3 12
    3 9
    4 7
    5 12
    
    */


    int size ;         cin >> size ; 
    int arr[size] ;  
    int minn = 0 , maxx = 0 ;             
    for(int i = 0 ; i < size ; i++)
    {
        cin >> arr[i] ;
    }

    for(int i = 0 ; i < size ; i++)
    {
        if(i == 0 )
        {
            minn = abs(arr[i] - arr[i+1]) ;
            maxx = abs(arr[i] - arr[size - 1]) ;     
        }
        else if (i == size - 1)
        {
            minn = abs(arr[i] - arr[i-1]) ;
            maxx = abs(arr[i] - arr[0]) ; 
        }
        else
        {
            minn = min(abs(arr[i] - arr[i+1]) , abs(arr[i] - arr[i-1])) ;
            maxx = max(abs(arr[i] - arr[0]) , abs(arr[i] - arr[size-1])) ; 
        }

        cout << minn << " " << maxx << endl;
    }


}

int main()
{
    fast;

    solve();

    return 0;
}
