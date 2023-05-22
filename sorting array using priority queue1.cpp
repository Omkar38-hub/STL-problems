//here we are using MAX heap for sorting 
#include<iostream>
#include<queue>
#include<array>
using namespace std;
int sorting(int a[],int n)
{
	priority_queue<int>pq(a,a+n);
	for(int i=n-1;i>=0;i--)
	{
		a[i]=pq.top();
		pq.pop();
	}
}
int main()
{
	int a[]={67,54,34,12,90,32};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"Before sorting array  ";
	for(auto x: a)
	{
		cout<<x<<" ";
	}
	sorting(a,n);
	cout<<"\n\nAfter sorting array  ";
	for(auto x: a)
	{
		cout<<x<<" ";
	}
	return 0;
}
