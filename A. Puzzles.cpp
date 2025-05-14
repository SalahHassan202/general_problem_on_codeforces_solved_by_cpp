// A. Puzzles
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main ()
{
    /*
    4 6
    10 12 10 7 5 22
    ================
    output is 
    5
    ================
    solution 
    ================
    4  ===> number of student
    6  ===> number of puzzles

    10 12 10 7 5 22 ===> puzzles 

    first step 
    sort the puzzles
    5 7 10 10 12 22

    then take any four number and get the difference between them 
    5 7 10 10           ==> difference between the latest and bigest number is ==> 10 - 5 = 5             (ok)
    12 10 7 5           ==> difference between the latest and bigest number is ==> 12 - 7 = 5             (ok)
    10 10 12 22         ==> difference between the latest and bigest number is ==> 22 - 10 = 12         ( refused )  
    */
   
   int student , puzzles;
   cin >> student >> puzzles ;
   int arr[puzzles] ;

   for(int i = 0 ; i< puzzles ; i++)
   {
        cin >> arr[i] ;
   }

   sort(arr ,arr+puzzles) ;
   long long res = arr[student - 1] - arr[0] ;          // case 1 

    // case 2 , 3 ,4 ,....etc 
   for(int i = 1 ; i <=(puzzles - student) ; i++)      // puzzles = 6 , student = 4 ===> 6-4 = 2         ===> for (int i = 1 ; i<=2 ; i++)   // 1 , 2 only 
   {
        if(arr[i+student-1] - arr[i] < res)
        {
            res = arr[i+student-1] - arr[i] ;
        }
   }

   cout<< res << endl;

    return 0;
}