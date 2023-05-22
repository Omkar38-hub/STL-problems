#include<iostream>
#include<algorithm>
using namespace std;
//The function returns true if it could rearrange the object as a lexicographically smaller permutation and return the previous permutation. 
//Otherwise, the function returns false to indicate that no previous permutation is possible.
int main()
{
	vector<int>v{1,2,3,4,5};
	prev_permutation(v.begin(),v.end());
	cout<<"The previous permutation of given number are ";
	for(int x: v)
		cout<<x<<" ";
	cout<<endl;
	int a[]={5,4,3,2,1};
	prev_permutation(a,a+5);
	cout<<"\nThe previous permutation of given number are ";
	for(int x: a)
		cout<<x<<" ";
	cout<<endl;
	return 0;
}

//Therefore the overall time complexity of this operation is O(n) time.
