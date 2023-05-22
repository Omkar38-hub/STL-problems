//Finding the intersection of two arrays and print elements according to first array
#include<iostream>
#include<unordered_set>
using namespace std;
void intersection(int a[],int b[],int n,int m)
{
	unordered_set<int>s;
	for(int i=0;i<m;i++)
		s.insert(b[i]);
	cout<<"Intersected elements are ";
	for(int j=0;j<n;j++)
	{
		if(s.find(a[j])!=s.end())
		{
			cout<<a[j]<<" ";
		}
	}
}
int main()
{
	int a[]={10,15,20,25,30,50};
	int b[]={30,5,15,80};
	int n=sizeof(a)/sizeof(a[0]);
	int m=sizeof(b)/sizeof(b[0]);
	intersection(a,b,n,m);
	return 0;
}
