#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<int>s;
	s.insert(10);
	s.insert(20);
	s.insert(5);
	s.insert(2);
	cout<<"The size of set is "<<s.size()<<endl;
	cout<<"The elements of set is in ascending order is  ";
	for(int x:s)
	  cout<<x<<" ";
	cout<<endl;
	if(!s.empty())
		cout<<"Not empty\n";
	else
		cout<<"Empty\n";
	return 0;
}
