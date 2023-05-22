#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int>nxgreater(int a[],int n)
{
	vector<int>v;
	stack<int>s;
	s.push(a[n-1]);
	v.push_back(-1);
	for(int i=n-2;i>=0;i--)
	{
		while(!s.empty()&&s.top()<=a[i])
		  s.pop();
		int ng=s.empty()?(-1):s.top();
		v.push_back(ng);
		s.push(a[i]);
	}
	return v;
}
int main()
{
	int a[]={5,15,10,8,6,12,9,18};
	int n=sizeof(a)/sizeof(a[0]);
	vector<int>v=nxgreater(a,n);
	cout<<"the next greater elements of the given series is ";
	for(auto it=v.rbegin();it!=v.rend();it++)
	   cout<<(*it)<<" ";
	return 0;
}
