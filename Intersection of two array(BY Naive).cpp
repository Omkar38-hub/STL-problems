//Finding the intersection of two arrays and print elements according to first array
#include<iostream>
using namespace std;
int main()
{
	int a[]={10,15,20,25,30,50};
	int b[]={30,5,15,80};
	int n=sizeof(a)/sizeof(a[0]);
	int m=sizeof(b)/sizeof(b[0]);
	cout<<"Intersected elements are ";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[j]==b[i])
			{
				cout<<a[j]<<" ";
				break;
			}
		}
	}
	return 0;
}
