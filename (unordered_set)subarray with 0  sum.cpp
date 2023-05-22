//If there are two same elements with same prev_sum(commulative frquency)
//then the there is must the sum is ZERO
#include<iostream>
#include<unordered_set>
using namespace std;
void zero(int a[],int n)
{
	unordered_set<int>s;
	int prev=0;
	for(int i=0;i<n;i++)
	{
		prev+=a[i];
		if(s.find(prev)!=s.end())
		{
			cout<<"YES"<<endl;
			return ;
		}
		if(prev==0)
		{
			cout<<"YES"<<endl;
			return;
		}
		s.insert(prev);	
	}
	cout<<"NO"<<endl;
}
int main()
{
	int a[]={1,4,13,-3,-10,5};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"The elements of array are ";
	for(int x: a)
		cout<<x<<" ";
	cout<<endl;
	zero(a,n);
	return 0;
}
