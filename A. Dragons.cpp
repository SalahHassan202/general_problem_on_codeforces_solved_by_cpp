// A. Dragons
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int main ()
{
    
    /*

    first input

    2 2         ===>   first line   initaial energy = 2    ;;;  number of dragons = 2    or  the nmber of lines = 2 
    1 99        ===>   second line   inital energy for the first dragon       ;;;;    strength of the first dragon 
    100 0       ===>   third line   inital energy for the second dragon       ;;;;    strength of the second dragon 
    ===============
    output  ==> YES

    how....?

    compare your intial energy with intial energy for the dragons
    if your energy is larger than energy of the dragon you can kill this dragon 
    and win with his strength 

    2 > 1 
    go to the first dragon 
    and kill him and win by his strenth 
    your intial energy become 2 + 99 = 101 ===> 2 + strength of the dragon 

    go to the second dragon 
    and kill him and win by his strength 


    output is ===> YES
    ===========================================================================

    second input

    10 1
    100 100
    =======
    compare your intial energy with intial energy of the dragon 
    10 < 100 
    you will die 
    ===============

    output ===> NO
    ===========================================================================

    third input 

    90 3 
    100 100
    10 5 
    20 10 
    =========
    if you go to the first dragon you will die 
    so that 
    you can go to the second dragon and kill it
    your intal energy become 90 + 5 = 95 

    go to the third dragon 
    kill it and your initaial energy become 
    95 + 10 = 105 

    i can go to the first dragon and kill it 
    your intial energy become 
    100 + 105 = 205 

    output  ===> YES

    ===========================================================================
    مش شرط الترتيب ان اقتل التنين الاول بعد كدا التاني وهكذا مش ضروري الترتيب 
    ===========================================================================
    
    */

    
    //! the idea of solution 

    /* 
    
    /// vector     // pair
    ==================================
     arr1[3] = {100 , 10 , 20 } ;
     arr2[3] = {100 , 5 , 10 } ;
    ==================================
    vec1[] = {100 , 10 , 20 } ;
    vec2[] = {100 , 5 , 10 } ;
    /// don't  have a size like array 
    ==================================
    /// vector     // pair
    vector of pair 

    vec1<pair>[] = [{100 , 100} , {10 , 5 } , {20 , 10 }] ;

    */

    vector<pair<int,int> > dragon ;
    long long initialEnergy , numberOfDragon ;
    cin >> initialEnergy >> numberOfDragon ;

    long long initialEnergyDragon , ecceptedEnergy;

    for(int i = 0 ; i < numberOfDragon ; i++)
    {
        cin >> initialEnergyDragon >> ecceptedEnergy ;

        // making a pair of dragon 
        dragon.push_back(make_pair(initialEnergyDragon , ecceptedEnergy)) ;

        // output from this sentax is (look at this comment (down))
        //   vec1<pair>[] = [{100 , 100} , {10 , 5 } , {20 , 10 }] ;


    }

    sort(dragon.begin() , dragon.end() ) ;
    bool ok = 1 ;       // flag 
    for(int i = 0 ; i < numberOfDragon ; i++)
    {
        //   vec1<pair>[] = [{100 , 100} , {10 , 5 } , {20 , 10 }] ;

        if(initialEnergy > dragon[i].first)
        {
            initialEnergy+=dragon[i].second ;
        }
        else
        {
            ok = 0 ;    // flag 
            break; 
        }
    }

    if(ok == 1)
    {
        cout<<"YES" <<endl;
    }
    else
    {
        cout<< "NO" << endl;
    }


    return 0 ;
}