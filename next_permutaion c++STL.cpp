// The next_permutation() is a built-in function in C++ STL, which is used to rearrange the elements 
//in the range [first, last) into lexicographical next permutation of a given sequence. 
//It provides the lexicographically smallest sequence that is just greater than the given sequence.
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>v{1,2,3,4,5};
	next_permutation(v.begin(),v.end());
	cout<<"The next permutation of given number are ";
	for(int x: v)
		cout<<x<<" ";
	cout<<endl;
	int a[]={5,4,1,2,3};
	next_permutation(a,a+5);
	cout<<"\nThe next permutation of given number are ";
	for(int x: a)
		cout<<x<<" ";
	cout<<endl;
	return 0;
}

//Time complexity=O(n)
