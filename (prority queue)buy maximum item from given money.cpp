//here we are using MIN heap
#include<iostream>
#include<queue>
using namespace std;
void find(int a[],int n,int sum)
{
	priority_queue<int,vector<int>,greater<int>>pq(a,a+n);
	int res=0;
	cout<<"items u able to purchase is  ";
	while(sum>=0&& !pq.empty()&&sum>=pq.top())
	{
		cout<<pq.top()<<" ";
		sum-=pq.top();
		res++;
		pq.pop();
	}
	cout<<"\nnumber of item able to purchase  "<<res<<endl;
}
int main()
{
	int a[]={1,12,5,111,200};
	int sum,n=sizeof(a)/sizeof(a[0]);
	cout<<"amount of money u have  ";
	cin>>sum;
	find(a,n,sum);
	return 0;
}
