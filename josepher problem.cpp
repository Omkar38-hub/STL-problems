//josepher problem is mainly used to find the survival of persons after forwding k steps ahead each time
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
int getserv(int n,int k)
{
	list<int>l;
	for(int i=0;i<n;i++)
	 l.push_back(i);
	auto itr=l.begin();
	while(l.size()>1)
	{
		for(int count=1;count<k;count++)
		{
			itr++;
			if(itr==l.end())//for making the list to behave like a circular link list
			   itr=l.begin();
		}
		itr=l.erase(itr);
		if(itr==l.end())//for making the list to behave like a circular link list
			   itr=l.begin();
	}
	return (*itr);
}
int main()
{
	cout<<"enter the size of numbers ";
	int k,n;
	cin>>n;
	cout<<"enter forwarding number ";
	cin>>k;
	int s=getserv(n,k);
	cout<<"servived person at the end is "<<s<<endl;
	return 0;
}
