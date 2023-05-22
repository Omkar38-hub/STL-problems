#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
string find(const string &txt)
{
	int pos=txt.find('.');
	if(pos==string::npos)// string ::npos is defined as -1 in string class
	{
		return "";
	}
	else
	   return txt.substr(pos+1);
}
int main()
{
	string txt="12.385";
	cout<<"Given text are ";
	cout<<txt<<endl;
	string res=find(txt);
	cout<<"Digits after decimal points are "<<res<<endl;
	return 0;
}
