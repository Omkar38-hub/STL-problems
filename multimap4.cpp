#include<iostream>
#include<map>
#include<string.h>
using namespace std;

multimap<int,string>mp;

void add(int n,string s)
{
	mp.insert({n,s});	
}
void printsorted()
{
	for(auto x: mp)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
}
void find(int n)
{
	auto it=mp.equal_range(n);
	for(auto itr=it.first;itr!=it.second;itr++)
	{
		cout<<itr->first<<" "<<itr->second<<endl;
	}
}
void printgreatersorted(int n)
{
	auto it=mp.upper_bound(n);
	while(it!=mp.end())
	{
		cout<<it->first<<" ";
	   cout<<it->second<<endl;
	   it++;
	}
}
void printsmallersorted(int n)
{
	auto it=mp.lower_bound(n);
	for(auto itr=mp.begin();itr!=it;itr++)
	{
		cout<<itr->first<<" ";
	   cout<<itr->second<<endl;
	}
}
int main()
{
	add(10,"abc");
	add(20,"bcd");
	add(5,"cde");
	add(20,"ghi");
	add(10,"efg");
	cout<<"print sorted\n";
	printsorted();
	cout<<"find(20)\n";
	find(20);
	cout<<"smaller sorted\n";
	printsmallersorted(20);
	cout<<"greatersorted\n";
	printgreatersorted(10);
	return 0;
}
