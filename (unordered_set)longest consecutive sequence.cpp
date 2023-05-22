#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;
void consecutive(int a[],int n)
{
	unordered_set<int>s;
	int res=0;
	for(int i=0;i<n;i++)
		s.insert(a[i]);
	for(int i=0;i<n;i++)
	{
		if(s.find(a[i]-1)==s.end())
		{
			int curr=1;
			while(s.find(a[i]+curr)!=s.end())
				curr++;
			res=max(curr,res);
		}
	}
	cout<<"The longest consecutive sequence is ";
	cout<<res<<endl;
}
int main()
{
	int a[]={8,20,7,30};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"Initially array elements are ";
	for(auto x: a)
	    cout<<x<<" ";
	cout<<endl;
	consecutive(a,n);
	return 0;
}
