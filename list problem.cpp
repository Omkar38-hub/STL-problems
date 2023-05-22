#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
list<int>l;
void insert(int x)
{
	l.push_back(x);
}
void print()
{
	for(int x:l)
	{
		 cout<<x<<" ";
	}
	cout<<endl;
}
void replace(int x,vector<int>v)
{
	auto it=find(l.begin(),l.end(),x);//find the first occurence of data x
	if(it==l.end())
	  return;
	it=l.erase(it);
	l.insert(it,v.begin(),v.end());
}
int main()
{
	insert(3);
	insert(10);
	insert(2);
	insert(10);
	print();
	vector<int>seq={40,20,30};
	replace(10,seq);
	print();
}
