#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
bool matching(char a,char b)
{
	return((a=='('&&b==')')||(a=='{'&&b=='}')||(a=='['&&b==']'));
}
bool isbalanced(string str)
{
	stack<char>s;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='('||str[i]=='{'||str[i]=='[')
		    {
		    	s.push(str[i]);
			}
		else
		{
			if(s.empty())
			   return false;
			else if(matching(s.top(),str[i]))
			    s.pop();
			else
			   return false;
		}
	}
	return(s.empty()==true);
}
int main()
{
	//our input string should contain only parenthesis i.e ([{
	string str;
	cout<<"enter the string of parenthesis ";
	cin>>str;
	if(isbalanced(str))
	   cout<<"Yes\nThe string is balanced\n";
	else
	   cout<<"No\nThe string is not balanced\n";
	return 0;
}

//time complexity is O(n)
