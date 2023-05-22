#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
	queue<int>q;
	q.push(10);
	q.push(50);
	q.push(20);
	q.push(450);
	q.push(30);
	cout<<"front elements is "<<q.front()<<"\nback element is "<<q.back()<<endl;
	cout<<"size of element is "<<q.size()<<endl;
	cout<<"elements are ";
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	return 0;
}
