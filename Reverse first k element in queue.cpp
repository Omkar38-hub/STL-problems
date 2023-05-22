#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int reverse(queue<int>&q,int k)
{
	if(q.empty()==true||k>q.size()||k<=0)
		return;
	stack<int>s;
	for(int i=0;i<k;i++)
	{
		s.push(q.front());
		q.pop();
	}
	while(!s.empty())
	{
		q.push(s.top());
		s.pop();
	}
	for(int i=0;i<q.size()-k;i++)
	{
		q.push(q.front());
		q.pop();
	}
}
int main()
{
	queue<int>q;
	cout<<"elements of queue is \n";
	int p;
	for(int i=0;i<6;i++)
	{
		cin>>p;
		q.push(p);
	}
	cout<<"enter the number of element u want to reverse  ";
	int k;
	cin>>k;
	reverse(q,k);
	cout<<"The final elements of queue is  ";
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	return 0;
}
