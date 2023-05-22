//here we will find number less than 75 from array in same order
#include<iostream>
#include<vector>
using namespace std;
vector<int>get_min(int a[],int n,int k)
{
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		if(a[i]<k)
		  v.push_back(a[i]);
	}
	return v;
}
int main()
{
	int a[]={23,56,78,100,22,34,76,87,56};
	int k=75,n=sizeof(a)/sizeof(a[0]);
	cout<<"elements of array smaller than "<<k<<" is ";
	for(auto x:get_min(a,n,k))
	    cout<<x<<" ";
	return 0;
}
