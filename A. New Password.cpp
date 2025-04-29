// A. New Password
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    /*
    idea of the problem 

    note that 

    the length of the password must be equal to n ,
    the password should consist only of lowercase Latin letters,
    the number of distinct symbols in the password must be equal to k ,
    any two consecutive symbols in the password must be distinct.
    Your task is to help Innokentiy and to invent a new password which will satisfy all given conditions.

    input 
    
    4 3
    =====
    abca or csds or qweq or java or vfgv or mnbm or hyth or edce or swxs or aqza ......etc 
    there are toooo many password 

    so that i want to follow a sequence to follow it to solve the probleem 

    sequence is ====>  (%)  

    size = 4   ,  = 3 
    for(int i = 0 ; i < size ; i++) // 0 1 2 3 
    {
        /// at each case i = 0 , i = 1 , i = 2 , i = 3 , .... (size - 1)....etc 
        i % symbole 
        /// i = 0 , 1 , 2 , 3
        0 % 3 = 0         ====>  a  = 97 at assci code + 0 (0 % 3) == a 
        1 % 3 = 1         ====>  b  = a 97 + 1 = 98 = b
        2 % 3 = 2         ====>  c  = a 97 + 2 = 99 = c
        3 % 3 = 0         ====>  a 
        ....etc 

    }
    
    
    */


	int size , symbol ;          cin >> size >> symbol ;
    
    for(int i = 0 ; i < size ; i++)
    {
        cout<<char( 'a' +(i % symbol)) ;
    }
    

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


