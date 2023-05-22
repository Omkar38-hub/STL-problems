#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
deque<int>q;
void insertmin(int n)
{
	q.push_front(n);
}
void insertmax(int n)
{
	q.push_back(n);
}
void getmax()
{
   cout<<"maximum is "<<q.back()<<endl;	
}
void getmin()
{
	cout<<"minimum is "<<q.front()<<endl;
}
void extractmin()
{
	cout<<"removed item is "<<q.front()<<endl;
	q.pop_front();
}
void extractmax()
{
	cout<<"removed item is "<<q.back()<<endl;
	q.pop_back();
}
int main()
{
	insertmin(10);
	insertmax(15);
	insertmin(5);
	getmax();
	getmin();
	extractmax();
	extractmin();
	return 0;
}
