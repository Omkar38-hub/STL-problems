//permutation means number of occurence of each value in both the vector is same
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>v1{23,31,42,68,76,45};//here vector v1 and v2 hve different sets of value
	vector<int>v2{34,23,12,56,32,90};
	if(is_permutation(v1.begin(),v1.end(),v2.begin()))//so "No" will be output
		cout<<"The is permutation in vector v1 and v2\n";
	else
		cout<<"The is 'NO' permutation in vector v1 and v2\n";
	int a[]={30,20,10};
	int b[]={20,10,30};
	if(is_permutation(a,a+3,b))
		cout<<"\n\nThe is permutation in array a and b\n";
	else
		cout<<"The is 'NO' permutation in array a and b\n";
	return 0;
}

