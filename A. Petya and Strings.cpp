// A. Petya and Strings
#include<iostream>
#include<string>
#include <cmath>
#include<algorithm>
using namespace std; 

int main()
{

	string s1 , s2 ;
	cin >> s1 >> s2 ;
	for(int i = 0 ; i < s1.size() ; i++)
	{
		int s3 = tolower(s1[i]) ;       // convert  the string to lower case 
		int s4 = tolower(s2[i]) ;       // convert  the string to lower case 
		if(s3 > s4 )
		{
			cout<< 1 << endl;
			return 0 ;     // 	EXIT FROM PROGRAM
		}
		else if (s3 < s4 )
		{
			cout<< -1 << endl;
			return 0 ;    // 	EXIT FROM PROGRAM
		}
		
	}

	cout<< 0 << endl;
	
/*

*************************   NOTE THAT *************************

==============================================================
islower()       ===>  check if the string is lower case or no 
isupper()       ===>  check if the string is upper case or no 
==============================================================
tolower()       ===>  convert  the string to lower case 
toupper()       ===>  convert  the string to upper case 
==============================================================
*/



	return 0;
}



/*

  *************************   NOTE THAT *************************


ASCII - Binary Character Table
Letter	ASCII Code	Binary	Letter	ASCII Code	Binary
a	097	01100001	A	065	01000001
b	098	01100010	B	066	01000010
c	099	01100011	C	067	01000011
d	100	01100100	D	068	01000100
e	101	01100101	E	069	01000101
f	102	01100110	F	070	01000110
g	103	01100111	G	071	01000111
h	104	01101000	H	072	01001000
i	105	01101001	I	073	01001001
j	106	01101010	J	074	01001010
k	107	01101011	K	075	01001011
l	108	01101100	L	076	01001100
m	109	01101101	M	077	01001101
n	110	01101110	N	078	01001110
o	111	01101111	O	079	01001111
p	112	01110000	P	080	01010000
q	113	01110001	Q	081	01010001
r	114	01110010	R	082	01010010
s	115	01110011	S	083	01010011
t	116	01110100	T	084	01010100
u	117	01110101	U	085	01010101
v	118	01110110	V	086	01010110
w	119	01110111	W	087	01010111
x	120	01111000	X	088	01011000
y	121	01111001	Y	089	01011001
z	122	01111010	Z	090	01011010


*/


