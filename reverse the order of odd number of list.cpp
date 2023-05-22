#include<iostream>
#include<list>
#include<stack>
using namespace std;
int main()
{
	list<int>l{7,20,3,25,30};
	cout<<"Inital elements of list is\n";
	for(auto x:l)
	  cout<<x<<" ";
	cout<<endl;
	stack<int>s;
	for(auto x:l)
	{
		if(x%2!=0)
		  s.push(x);
	}
	for(auto &x:l)
	{
		if(x%2!=0)
		{
			x=s.top();
			s.pop();
		}	  
	}
	cout<<"\nFinal elements of list is\n";
	for(auto x:l)
	  cout<<x<<" ";
	cout<<endl;
	return 0;
}
