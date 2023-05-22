#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<int,int>mp;
void get(int id)
{
	cout<<mp[id]<<endl;
}
void set(int id,int balance)
{
		mp[id]=balance;	
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
