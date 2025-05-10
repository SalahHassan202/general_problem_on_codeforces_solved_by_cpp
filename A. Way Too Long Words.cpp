// A. Way Too Long Words 
#include <iostream>
using namespace std;
int main()
{
int size;
cin>> size ;
for(int i=0; i<size ;i++){
    string word ;             // salahhassan      11       s9n
    cin>>word;

    int mySize = word.length() ;
    if(mySize >10){
        cout<< word[0]<<mySize-2 <<word[mySize -1]<<endl; 
    }
    else{
        cout << word<<endl;
    }
}
    return 0;
}