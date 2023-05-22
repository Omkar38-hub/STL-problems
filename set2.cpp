#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<int,greater<int>>s;//arrange in descending order
	s.insert(10);
	s.insert(5);
	s.insert(20);
	s.insert(5);
	s.insert(2);
	cout<<"The elements in descending order are ";
	for(int x:s)
		cout<<x<<" ";
	cout<<endl;
	cout<<"The elements in ascening order are ";
	for(auto it=s.rbegin();it!=s.rend();it++)
		cout<<(*it)<<" ";
	cout<<endl;
	auto pos=s.find(5);
	if(pos==s.end())
		cout<<"Not found\n";
	else
		cout<<"Found\n";
	if(s.count(3)!=0)
		cout<<"Found\n";
	else
		cout<<"Not Found\n";
	return 0;
}
