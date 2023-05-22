#include<iostream>
#include<stack>
using namespace std;
stack<int>ms;//main stack
stack<int>as;//auxilliary stack alwys stores the minimum value 
void push(int n)
{
	if(ms.empty())
	{
		ms.push(n);
		as.push(n);
	}
	ms.push(n);
	if(as.top()>=ms.top())
	  as.push(n);
}
void pop()
{
	if(ms.top()==as.top())
	   as.pop();
	ms.top();
}
void getmin()
{
	cout<<"current minimum is  "<<as.top()<<endl;
}
int main()
{
	push(5);
	push(10);
	getmin();
	push(1);
	getmin();
	pop();
	getmin();
	push(6);
	pop();
	push(2);
	getmin();
	push(4);
	return 0;
}
