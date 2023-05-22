#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
void display(const list<int> &p)
{
	cout<<"current content of list  ";
	for(int x:p)
	{
		cout<<x<<" ";
	}
	cout<<endl;
}
void display1(const list<int> &p)
{
	cout<<"current elements in list1....";
	for(auto it=p.begin();it!=p.end();it++)
	{
		cout<<(*it)<<" ";
	}
	cout<<endl;
}
int main()
{
	list<int>l;
	list<int>l1(5);
	display(l);
	display1(l1);
	l.push_back(10);
	l1.push_front(5);
    l.push_back(20); 
    display(l);
	display1(l1);
	l.pop_front();
    l1.pop_back();
    display(l);
	display1(l1);
	l1.resize(3);
	display1(l1);
	l1.swap(l);
	display(l);
	display1(l1);
	l.unique();
	display(l);
	//display1(l1);
	return 0;
}
