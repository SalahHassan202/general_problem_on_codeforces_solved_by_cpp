// A. Boy or Girl

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    string name ;           cin >> name ;
	int counter = 0 , flag = 1 ;
	for(int i = 0 ; i< name.size() ; i++)
	{
		for(int j = i + 1 ; j < name.size() ; j++)
		{
			if(name[i] == name[j] )
			{
				flag = 0 ;
				break;
			}
		}

		if (flag) // == 0 
		{
			counter++;
		}
		else
		{
			flag = 1 ;
		}

	}


	if (counter % 2 == 0)    // even 
	{
		cout<< "CHAT WITH HER!"<< endl;
	}
	else
	{
		cout<<"IGNORE HIM!" << endl;
	}


   
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
