// A. Don't Try to Count

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
        int t;
    cin>>t;

    while(t--)
    {
        int n1,n2;
        cin>>n1>>n2;
        string s1,s2;
        cin>>s1>>s2;
        
        bool res =false ;
        for(int i =0 ; i<7 ; i++)
        {
            if(s1.find(s2)!= -1)
            {
                res =true;
                cout<<i<<endl;
                break;
            }
            s1+=s1 ;         // s1++;
        }
        if(!res)
        {
            cout<<-1<<endl;
        }
    }

}

int main()
{
    fast;
   
    solve(); 

    return 0;
}


