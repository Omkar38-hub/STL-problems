#include<iostream>
#include<map>
using namespace std;
void print(int a1[],int a2[],int n,int m)
{
	map<int,int>mp;
	for(int i=0;i<n;i++)
		mp[a1[i]]++;
	cout<<"The elements accoring to other\n";
	for(int i=0;i<m;i++)
	{
		if(mp.find(a2[i])!=mp.end())
		{
			auto it=mp.find(a2[i]);
			for(int j=0;j<it->second;j++)
		    	cout<<it->first<<" ";
		 	mp.erase(a2[i]);
		} 	
	}
	for(auto itr=mp.begin();itr!=mp.end();itr++)
	{
		for(int j=0;j<itr->second;j++)
		  cout<<itr->first<<" ";
	}
}
int main()
{
	int a1[]={2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
	int a2[]={2, 1, 8, 3};
	int n=sizeof(a1)/sizeof(a1[0]);
	int m=sizeof(a2)/sizeof(a2[0]);
	print(a1,a2,n,m);
	return 0;
}
