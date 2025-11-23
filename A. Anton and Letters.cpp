// A. Anton and Letters

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
	string s1 ;             
	getline(cin , s1) ; // to get the string if the string exisit a spaces ;
	set <char> letters ;       // make a set ===> {1 , 2 , 3 , 4, 5 , 6} ===> this is a set 
	for(int i = 0 ; i< s1.size() ; i++)
	{
		if(s1[i] != '{' && s1[i] != '}' && s1[i] != ',' && s1[i] != ' ')
		{
			// ignore for ===> "{" , "}" , "," , " " ;
			letters.insert(s1[i]) ;
		}
		
	}

	cout<< letters.size() << endl;
}
int main()
{
    fast;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
