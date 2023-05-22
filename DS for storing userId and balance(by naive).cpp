#include<iostream>
#include<vector>
#include<utility>
using namespace std;
vector<pair<int,int>>v;
void get(int id)
{
	for(int i=0;i<v.size();i++)
	{
		if(v[i].first==id)
			cout<<v[i].second<<endl;
	}
	
}
void set(int id,int balance)
{
	for(int i=0;i<v.size();i++)
	{
		if(v[i].first==id)
		{
			v[i].second=balance;
			return ;
		}
	}
	v.push_back({id,balance});
}
int main()
{
	set(1,100);
	set(2,200);
	cout<<"balance of 1 is ";
	get(1);
	set(1,500);
	cout<<"balance of 1 is ";
	get(1);
	cout<<"balance of 1 is ";
	get(2);
	return 0;
}
