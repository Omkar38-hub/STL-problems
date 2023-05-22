#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int>nxgreater(int a[],int n)
{
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int j;
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				v.push_back(a[j]);
				break;
			}
			  
		}
		if(j==n)
		 v.push_back(-1);
	}
	return v;
}
int main()
{
	int a[]={5,15,10,8,6,12,9,18};
	int n=sizeof(a)/sizeof(a[0]);
	vector<int>v=nxgreater(a,n);
	cout<<"the next greater elements of the given series is ";
	for(int x:v)
	   cout<<x<<" ";
	return 0;
}
