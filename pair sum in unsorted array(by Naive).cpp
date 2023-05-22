//sum of two elements of an array is equal to given sum
#include<iostream>
using namespace std;
void pair_Sum(int a[],int n,int sum)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((a[i]+a[j])==sum)
			{
				cout<<"YES"<<endl;
				return;
			}
		}
	}
	cout<<"NO"<<endl;
}
int main()
{
	int a[]={3,2,8,15,-8};
	int n=sizeof(a)/sizeof(a[0]);
	int sum=6;
	cout<<"Initial elements of the array is ";
	for(int x: a)
	    cout<<x<<" ";
	cout<<endl;
	pair_Sum(a,n,sum);
	return 0;
}
