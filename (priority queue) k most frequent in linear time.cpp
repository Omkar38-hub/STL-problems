//here we can use vector nd unordered map
//and vector
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void find(int a[],int n,int k)
{
	unordered_map<int,int>mp;
	for(int i=0;i<n;i++)
	   mp[a[i]]++;
	vector<int>v[n+1];
	for(auto x:mp)
		v[x.second].push_back(x.first);
	
	int count=0;
	cout<<k<<" most frequent element is  ";
	for(int i=n;i>=0;i--)
	{
		for(int x:v[i])
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
	int a[]={10,5,20,5,10,10,30};
	int k,n=sizeof(a)/sizeof(a[0]);
	cout<<"enter the number of frequent element u want  ";
	cin>>k;
	find(a,n,k);
	return 0;
}
