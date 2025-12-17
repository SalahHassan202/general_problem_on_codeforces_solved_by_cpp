// A. Colorful Stones (Simplified Edition)

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

	RGB
	RRR
	---------
	compare every letter in string 
	if they are the same letter i can move one step 
	RGB 
	RRR 
	----------------
	R like R ===> (YES) move one step 
	G like R ===> (NO)

	i stand in the step two 

	output is 2 

	======================================= another example =======================================
	RRRBGBRBBB
	BBBRR
 	-----------------
	output is 3 				

	======================================= another example =======================================
	BRRBGBRGRBGRGRRGGBGBGBRGBRGRGGGRBRRRBRBBBGRRRGGBBB
	BBRBGGRGRGBBBRBGRBRBBBBRBRRRBGBBGBBRRBBGGRBRRBRGRB
	-----------------
	output is 15


	*/

	string s1 , s2 ;                  cin >> s1 >> s2 ;
	// string is array of charcter 
	int counter = 0 ;
	for(int i =0 ; i < s2.length() ; i++)
	{
		if(s1[counter] == s2[i])
		{
			counter++;
		}
	}

	cout<< ++counter << endl; 

}

int main()
{
    fast;
    ll t = 1;
   //  cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}



