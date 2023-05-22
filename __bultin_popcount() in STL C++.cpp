#include<iostream>
#include<algorithm>
using namespace std;
// The __builtin_popcount() is a built-in function of GCC compiler, 
// which takes an integer as an argument and it counts how many set bits(1)  it has in its binary representation
int main()
{
	long int n=5;
	cout<<"number of set bit (1) are "<<  __builtin_popcount(n)<<endl;
	n=-1;
	cout<<"number of set bit (-1) are "<< __builtin_popcount(n)<<endl;
	return 0;
}
// The __builtin_popcount() takes unsigned integer as the argument.


//  In addition to __builtin_popcount(), there are two other functions, namely __builtin_popcountl() and __builtin_popcountll() 
//that are used to count the set bits of long integer and long long integer respectively.
