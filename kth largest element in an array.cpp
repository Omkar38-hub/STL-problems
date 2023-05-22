//Here we are using MAX heap
#include<iostream>
#include<queue>
using namespace std;
void find(int a[],int n,int k)
{
	priority_queue<int>pq(a,a+n);
	int x;
	if(k>n||k<=0)
	   return;
	cout<<k<<"th largest element of array is ";
	while(k--)
	{
		x=pq.top();
		pq.pop();
	}
	cout<<x<<endl;
}
int main()
{
	int a[]={67,54,34,12,90,32};
	int k,n=sizeof(a)/sizeof(a[0]);
	cout<<"enter required largest element   ";
	cin>>k;
	find(a,n,k);
	return 0;
}
