// By Naive approach
//time complexity is O(n^2)
#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
void printmax(int a[],int n,int k)
{
	cout<<"maximum from all substring of size "<<k<<" is "<<endl;
	for(int i=0;i<n-k+1;i++)
	{
		int mx=a[i];
		for(int j=i+1;j<i+k;j++)
		   mx=max(a[j],mx);
		cout<<mx<<" ";
	}
}
int main()
{
	int a[]={10,8,5,12,15,7,6};
	int n=sizeof(a)/sizeof(a[0]);
	int k=3;
	printmax(a,n,k);
	return 0;
}
