// A. Anton and Polyhedrons
#include<iostream>
#include<string>
#include <cmath>
#include<algorithm>
using namespace std; 

int main()
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
	
	

	return 0;
}



