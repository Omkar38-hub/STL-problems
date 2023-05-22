#include<iostream>
#include<map>
#include<string.h>
using namespace std;
map<int,string>mp;
void add(int p,string s)
{
	mp[p]=s;
}
string find(int n)
{
	auto it=mp.find(n);
	if(it==mp.end())
		return "";
	else
	    return it->second;
}
void printsorted()
{
	cout<<"The sorted order are \n";
	for(auto x : mp)
	{
		cout<<x.first<<" ";
	   cout<<x.second<<endl;
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
	add(100,"pqr");
	add(5,"xyz");
	add(10,"abc");
	cout<<"The element is "<<find(5)<<endl;
	printsorted();
	cout<<"greater sorted\n";
	printgreatersorted(7);
	cout<<"smallersorted\n";
	printsmallersorted(99);
	return 0;	
}
