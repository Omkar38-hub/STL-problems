//here we are using MIN heap of  k size
//so that we can print k largest elements
#include<iostream>
#include<queue>
using namespace std;
void find(int a[],int n,int k)
{
	priority_queue<int,vector<int>,greater<int>>pq(a,a+k);
	for(int i=k;i<n;i++)
	{
		if(a[i]>pq.top())
		{
			pq.pop();
			pq.push(a[i]);
		}
	}
	cout<<k<<" largest element in a array are  ";
	while(!pq.empty())
	{
		cout<<pq.top()<<" ";
		pq.pop();
	}
}
int main()
{
	int a[]={67,54,34,12,90,32};
	int k,n=sizeof(a)/sizeof(a[0]);
	cout<<"enter the number of largest element you required   ";
	cin>>k;
	find(a,n,k);
	return 0;
}
