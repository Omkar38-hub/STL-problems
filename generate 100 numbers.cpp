//generate a given number n,print first n number(in increasing order) such that all these number have digits in st{5,6}
#include<iostream>
#include<queue>
#include<vector>
#include<string.h>
using namespace std;
vector<string> form_no()
{
	vector<string>v;
	queue<string>q;
	v.push_back("0");
	q.push("1");
	q.push("2");
	q.push("3");
	q.push("4");
	q.push("5");
	q.push("6");
	q.push("7");
	q.push("8");
	q.push("9");
	for(int i=0;i<100;i++)
	{
		string str = q.front();
		v.push_back(str);
		q.pop();
		q.push(str+"0");
		q.push(str+"1");
		q.push(str+"2");
		q.push(str+"3");
		q.push(str+"4");
		q.push(str+"5");
		q.push(str+"6");
		q.push(str+"7");
		q.push(str+"8");
		q.push(str+"9");
	}
	return v;
}
int main()
{
	vector<string>v=form_no();
	cout<<"The consecutive 100 numbers are\n  ";
	for(auto x:v)
	{
		cout<<x<<" ";
	}
	return 0;
}
