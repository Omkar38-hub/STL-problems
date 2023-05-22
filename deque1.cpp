#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
void display(const deque<int>&q)
{
	cout<<"current elements of deque is  ";
	for(int x: q)
	   cout<<x<<" ";
	cout<<endl;
}
int main()
{
	deque<int>q={1,2,3,4};
	display(q);
	q.push_back(5);
	q.push_front(0);
	display(q);
	q.pop_back();
	q.pop_front();
	display(q);
	if(q.empty())
	   cout<<"Is empty\n";
	else
	   cout<<"Not empty\n";
	cout<<"size of deque is "<<q.size()<<endl;
	auto it=q.begin();
	q.insert(it,2,34);
	display(q);
	q.erase(it);
	display(q);
	cout<<"iterator is pointing to "<<(*it)<<endl;
	display(q);
	q.erase(it,it+2);
	display(q);
	cout<<"iterator is pointing to "<<(*it)<<endl;
	q.clear();
	display(q);
	return 0;
}
