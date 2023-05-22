#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int>pregreater(int a[],int n)
{
	vector<int>v;
	stack<int>s;
	for(int i=0;i<n;i++)
	{
		while(!s.empty()&&s.top()<=a[i])
		    s.pop();
		int gr=s.empty()?(-1):s.top();
		v.push_back(gr);
		s.push(a[i]);
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
