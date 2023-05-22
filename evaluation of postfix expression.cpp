#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
int eval(string str)
{
	stack<int>s;
	int len=str.length();
	for(int i=0;i<len;i++)
	{
		if(isdigit(str[i]))
		{
			s.push(str[i]-'0');
		}
		else
		{
			int op1=s.top();
			s.pop();
			int op2=s.top();
			s.pop();
			char ch=str[i];
			switch(ch)
			{
				case '+':
					s.push(op2+op1);
					break;
				case '-':
					s.push(op2-op1);
					break;
				case '*':
					s.push(op2*op1);
					break;
				case '/':
					s.push(op2/op1);
					break;
			}
			
		}
	}
	return s.top();
}
int main()
{
	string str="570*+6-";
	cout<<"evaluation of given postfix is:: "<<eval(str);
	return 0;
}
