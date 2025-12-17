// A. Fafa and his Company

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{	
    int num ;              // the number of employees
    cin >> num ; 
    int result = 0 ;
    for(int i = 1 ; i < num ; i++)        // i <= num      ===> if i want to put it we need to say ===>   if(num != i && (num - i ) % i == 0)
    {
        if((num - i ) % i == 0)
        {
            result++;
        }
    }

    cout << result << endl;
	

}

int main()
{
    fast;

    solve();

    return 0;
}
