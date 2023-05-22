//here we are taking care of order of element as it is in array
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void frequency(int a[],int n,int k)
{
	unordered_map<int,int>mp;
	for(int i=0;i<n;i++)
		mp[a[i]]++;
	vector<int>v[n+1];
	for(int i=0;i<n;i++)
	{
		int f=mp[a[i]];
		if(f!=-1)//this check has we previously visited on that element or not
		{
			v[f].push_back(a[i]);
			mp[a[i]]=-1;//mark that we have visited
		}	
	}
	int count=0;
	for(int i=n-1;i>=0;i--)
	{
		for(int x: v[i])
		{
			cout<<x<<" ";
			count++;
			if(count==k)
			   return;
		}
	}
}
int main()
{
	int a[]={10,40,40,10};
	int n=sizeof(a)/sizeof(a[0]);
	int k=1;
	cout<<"Initial elements of an array are ";
	for(int x: a)
		cout<<x<<" ";
	cout<<endl;
	frequency(a,n,k);
	return 0;
}
