#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
int main()
{
	stack<char>s;
	string str;
	cout<<"enter the string ";
	cin>>str;
	int len=str.length();
	for(int i=0;i<len;i++)
	{
		s.push(str[i]);
	}
	cout<<"string in reverse order is  ";
	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
	}
}
