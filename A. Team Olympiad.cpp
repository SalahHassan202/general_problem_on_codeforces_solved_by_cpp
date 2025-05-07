// A. Team Olympiad
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

// The first line contains integer n (1 ≤ n ≤ 5000) — the number of children in the school
int arr1[50005];
int arr2[50005];
int arr3[50005];
// global variables ......

int main()
{

    /*
    solution of the problem 
    the idea......

    7
    1 3 1 3 2 1 2
    ========================
    to form the team 
    ti = 1, if the i-th child is good at programming,
    ti = 2, if the i-th child is good at maths,
    ti = 3, if the i-th child is good at PE.
    ========================
    making a filtering the number to get all teams 
    1 1 1          size = 3 ;               good at programing ;
    2 2 2          size = 3 ;               good at maths ;
    3 3            size = 2 ;               good at PE;
    ======================================================
    the number of teams is the latest size = 2 
    [1 , 2 , 3]      ========> the first team ;
    [1 , 2 , 3]      ========> the second team ;
    [1 , 2 ]         ========> not a team ;
    =======================================================
    8
    1 2 1 3 2 1 2 3
    =================
    output 
    2
    3 5 2
    6 7 4       ===> print the postion not index 
    =======================================================
    
    */

    int size ;              cin >> size ;
    
    int a1 = 0 , a2 = 0 , a3 = 0 ;

    for(int i =1 ; i<= size ; i++)  //  i deal with position not index ===> so that i started (i) from 1 
    {
        int num ;              cin >> num ;
        if(num == 1)
        {
            arr1[a1] = i ;   // position not index .
            a1++;
        }
        else if(num == 2)
        {
            arr2[a2] = i ;   // position not index .
            a2++;
        }
        else        //   (num == 3)
        {
            arr3[a3] = i ;   // position not index .
            a3++;
        }
    }

    int number_of_teams = min({a1 , a2 , a3}) ;

    cout<< number_of_teams << endl;

    for(int i = 0 ; i < number_of_teams ; i++)
    {
        cout<< arr1[i] <<" "<<arr2[i] <<" "<<arr3[i]<<endl;
    }


    return 0 ;
}