#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
void find(const string &txt,const string &pat)
{
	int pos=txt.find(pat);
	cout<<"Pattern is found at ";
	while(pos!=string::npos)// string ::npos is defined as -1 in string class
	{
		cout<<pos<<" ";
		pos=txt.find(pat,pos+1);
	}
}
int main()
{
	string txt="geeksforgeeks";
	string pat="eeks";
	cout<<"Given text are ";
	cout<<txt<<endl;
	cout<<"Pattern to be searched ";
	cout<<pat<<endl;
	find(txt,pat);
	return 0;
}
