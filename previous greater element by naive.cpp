#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int>pregreater(int a[],int n)
{
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int j;
		for(j=i-1;j>=0;j--)
		{
			if(a[j]>a[i])
			{
				v.push_back(a[j]);
				break;
			}
		}
		if(j==-1)
		 v.push_back(-1);
	}
	return v;
}
int main()
{
	int a[]={20,30,10,5,15};
	int n=sizeof(a)/sizeof(a[0]);
	vector<int>v=pregreater(a,n);
	cout<<"the previous greater elements of the given series is ";
	for(int x:v)
	   cout<<x<<" ";
	return 0;
}
