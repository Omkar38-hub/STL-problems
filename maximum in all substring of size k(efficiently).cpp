//this is efficient approach taking time O(n)
#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
void printmax(int a[],int n,int k)
{
	cout<<"maximum from all substring of size "<<k<<" is "<<endl;
	deque<int>q;
	for(int i=0;i<k;i++)//for inputting first k elements
	{
		while(!q.empty()&&a[i]>=a[q.back()])
		  q.pop_back();
		q.push_back(i);
	}
	for(int i=k;i<n;i++)
	{
		cout<<a[q.front()]<<" ";
		while(!q.empty()&&q.front()<=i-k)
		  q.pop_front();
		while(!q.empty()&&a[i]>=a[q.back()])
		  q.pop_back();
		q.push_back(i);
	}
	cout<<a[q.front()];//for last set of substring
}
int main()
{
	int a[]={10,8,5,12,15,7,6};
	int n=sizeof(a)/sizeof(a[0]);
	int k=3;
	printmax(a,n,k);
	return 0;
}
//Time Complexity: O(n). It seems more than O(n) at first look. If we take a closer look,
// we can observe that every element of the array is added and removed at most once. So there are total 2*n operations.
//Auxiliary Space: O(k)
