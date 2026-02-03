// A. Ksenia and Pan Scales

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
    the idea of the problem

    several weights of an equal mass , Ksenia has already put some weights on the scales ,
   If you cannot put all the weights on the scales so that the scales were in equilibrium, print string "Impossible".
    Otherwise, print the description of the resulting scales, copy the format of the input. 
    
    first case
    AC|T         // 2 | 1
    L            // 1
    ===========
    AC|TL          // 2 | 2
    --------------------------------------------
    second case
    |ABC          // 0 | 3
    XYZ           // 3
    ===========
    XYZ|ABC      // 3 | 3
    --------------------------------------------
    third case
    W|T        //1 | 1
    F          // 1
    ===========
    Impossible
    --------------------------------------------
    forth case 
    ABC|       // 3 | 0
    D          //1
    ===========
    Impossible
    --------------------------------------------

    */

   string scale , task , right , left ;               cin >> scale ;
   int cross = scale.find('|') ;    //  AC|T         ===>     0 1 | 3     ==> 0 1 2 3 
   left = scale.substr(0 , cross) ;    // AC
   right = scale.substr(cross + 1) ;  // from | to the end 
   cin >> task ;

  
    for (auto pointer : task)  
    {
        if (left.size() <= right.size())
        {
            left += pointer;
        }
        else 
        {
            right += pointer;
        }
    }
       
       if(left.size() == right.size())
       {
            cout<< left << "|" << right <<endl;
       }
       else
       {
            cout<< "Impossible" << endl;
       }

    // inline if 
    // cout << (left.size() == right.size() ? left + "|" + right : "Impossible") << endl;
  

    /*

    for: هذه كلمة مفتاحية تُستخدم لبدء تعريف حلقة for.

    auto: يُستخدم لتحديد نوع المتغير بشكل تلقائي بناءً على القيمة التي يتم تخزينها فيه.
     في هذه الحالة، يعتمد النوع على نوع عنصر المصفوفة.

    pointer: اسم المتغير الذي سيتم استخدامه لتخزين قيم كل عنصر في المصفوفة أثناء التكرار.

    task: اسم المصفوفة التي يتم تكرار عناصرها.

    باختصار، هذه الحلقة for تقوم بتكرار عناصر المصفوفة task، 
    وفي كل تكرار، يُخزن العنصر الحالي في المتغير pointer

    */

}

int main()
{
    fast;

    solve();

    return 0;
}
