// A. Anton and Polyhedrons

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
	int size , totalFaces = 0 ;             cin >> size ;
	string shape ; 
	for(int i = 0 ; i < size ; i++)
	{
		cin >> shape ; 

		if(shape == "Tetrahedron")
		{
			totalFaces+= 4 ;
		}
		else if (shape == "Cube")
		{
			totalFaces+= 6 ;
		}
		else if (shape == "Octahedron")
		{
			totalFaces+= 8 ;
		}
		else if (shape == "Dodecahedron")
		{
			totalFaces+= 12 ;
		}
		else // (shape == "Icosahedron")
		{
			totalFaces+= 20 ;
		}
	}

	cout<< totalFaces << endl;
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
