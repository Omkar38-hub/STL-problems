//generate a given number n,print first n number(in increasing order) such that all these number have digits in st{5,6}
#include<iostream>
#include<queue>
#include<vector>
#include<string.h>
using namespace std;
vector<string> form_no(int n,string k1,string k2)
{
	vector<string>v;
	queue<string>q;
	q.push(k1);
	q.push(k2);
	for(int i=0;i<n;i++)
	{
		string str = q.front();
		v.push_back(str);
		q.pop();
		q.push(str+k1);
		q.push(str+k2);
	}
	return v;
}
int main()
{
	cout<<"enter the no. of number u want  ";
	int n;
	string k1,k2;
	cin>>n;
	cout<<"enter the two digits u want ";
	cin>>k1>>k2;
	vector<string>v=form_no(n,k1,k2);
	cout<<"the "<<n<<" number made from "<<k1<<" and "<<k2<<" are  ";
	for(auto x:v)
	{
		cout<<x<<" ";
	}
	return 0;
}
