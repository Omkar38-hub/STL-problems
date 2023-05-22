#include<iostream>
#include<forward_list>
#include<algorithm>
using namespace std;
void display(const forward_list<int> &p)
{
	cout<<"current content of forward list  ";
	for(int x:p)
	{
		cout<<x<<" ";
	}
	cout<<endl;
}
void display1(const list<int> &p)
{
	cout<<"current elements in forward list1....";
	for(auto it=p.begin();it!=p.end();it++)
	{
		cout<<(*it)<<" ";
	}
	cout<<endl;
}
int main()
{
	forward_list<int>l;
	display(l);
	l.assign({1,2,3,4});
	display(l);
	l.push_front(100);
	forward_list<int>l1;
	l1.assign(l.begin(),l.end());
	display1(l1);
	l.pop_front();
	display(l);
	auto it=l1.insert_after(l1.begin(),55);
	display1(l1);
	it = l1.emplace_after(it,255);
	display1(l1);
	it = l1.erase_after(it, l1.end());
	display1(l1);
	l.merge(l1);
	display1(l1);
	display(l);
	l.sort();
	display(l);
	return 0;
}
