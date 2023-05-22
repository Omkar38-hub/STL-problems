#include<iostream>
#include<map>
#include<array>
using namespace std;
void Greater(int a[],int n)
{
	map<int,int>mp;
	for(int i=0;i<n;i++)
	  mp[a[i]]++;
	int current=0;
	for(auto it=mp.rbegin();it!=mp.rend();it++)
	{
		int freq=it->second;
		it->second=current;
		current+=freq;
	}
	cout<<"Count of greater number of particular element is \n";
	for(int i=0;i<n;i++)
		cout<<mp[a[i]]<<" ";
}
int main()
{
	int a[]={55,13,3,23,5,2,98};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"Array element is \n";
	for(int x: a)
		cout<<x<<" ";
	cout<<endl;
	Greater(a,n);
	return 0;
}
