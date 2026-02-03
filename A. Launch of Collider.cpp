// A. Launch of Collider

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
        RLRL
        2 4 6 10
        -------------------
        output 1 
        -------------------
        idea of solution ::

        4 ====> size 
        RLRL ====> right left right left 
        2 4 6 10   ===> عدد الجزيئات 
        -----------------------
        2 & 4 
        2 move to right 
        4 move to left 
        they (2 , 4 ) will make a collision at sec = 3 
        the 2 move one step to the right  be 3 
        and 4 move one step to the left to be 3 

        collision between (2 , 4 )== 1 micro second


        4 & 6 
        4 move to left 
        6 move to right

        no collision between 4 & 6  


        6 & 10 
        6 move to right
        10 move to left
        they (6 , 10 ) will make a collision at sec = 8 
        the 6 move two step to the right  be 8 
        and 4 move two step to the left to be 8

        collision between (6 , 10 )== 2 micro second



        minimum collision is ===> min(1 , 2 ) == 1 micro second 

        
        */

        ll size ;                       cin >> size ;
        string sequance ;                      cin >> sequance ; 
        ll arr[size] ; 
        ll time = 0 , minTime = 100000000000;
        for(int i = 0 ; i < size ; i++)
        {
            cin >> arr[i] ;
        }
        
        for(int i = 0 ; i < size ; i++)
        {
            if(sequance[i] == 'R' && sequance[i + 1] == 'L'  )   // there are a collision ===>  يوجد تصادم(الحاله ابوحيده التي يحدث فيها التصادم)
            {
                time = (arr[i+1] - arr[i]) / 2 ;
                // sec = 2 , sec = 4    ===> (4 - 2) / 2 == 1 ;      ===> there are a collision at 1 micro second

                if(time < minTime)
                {
                    minTime = time ;
                }
            }
        }

        if(minTime ==  100000000000 )      // there no a collision  ===>  لا يوجد تصادم
        {
            cout << -1 << endl;
        }
        else
        {
            cout << minTime << endl;
        }

}

int main()
{
    fast;

    solve();

    return 0;
}
