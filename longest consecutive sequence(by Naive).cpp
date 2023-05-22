#include<iostream>
#include<algorithm>
using namespace std;
void consecutive(int a[],int n)
{
	sort(a,a+n);
	int cnt=1,res=1;
	for(int i=0;i<n;i++)
	{
		if(a[i]==a[i+1]-1)
		{
			cnt++;
		}
		else
		{
			res=max(res,cnt);
			cnt=1;
		}
	}
	res=max(res,cnt);
	cout<<"The longest consecutive sequence is ";
	cout<<res<<endl;
}
int main()
{
	int a[]={1,9,3,4,2,20};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"Initially array elements are ";
	for(auto x: a)
	    cout<<x<<" ";
	cout<<endl;
	consecutive(a,n);
	return 0;
}
