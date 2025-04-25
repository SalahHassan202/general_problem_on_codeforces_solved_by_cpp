// A. Mahmoud and Longest Uncommon Subsequence
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
using namespace std;

int find_uncommon_subsequence_length( string a , string b)
{
    if (a == b)
    {
        return -1; // No uncommon subsequence
    }

    return max(a.length(), b.length());
}

int main()
{

    /*

	abc 
	sub sequence is 
	a
	b
	c
	ab
	ac
	bc
	abc
	---------
	7 sub suequence 
	.........etc 
	
	*/


    string a, b;
    cin >> a >> b;

    int result = find_uncommon_subsequence_length(a, b);
    cout << result << endl;

    return 0;
}

