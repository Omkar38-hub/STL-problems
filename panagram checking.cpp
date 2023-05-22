// A pangram is a sentence containing every letter in the English alphabet.
#include<iostream>
#include<string.h>
using namespace std;
bool panagram(const string &s)
{
	int n=s.length();
	bool v[26]={0};
	for(int i=0;i<n;i++)
	{
		char x=s[i];
		if(x>='a'&&x<='z')
		   v[x-'a']=true;
		if(x>='A'&&x<='Z')
		   v[x-'a']=true;
		  
	}
	for(int i=0;i<26;i++)
	{
		if(v[i]==false)
		   return false;
	}
	return true;
}
int main()
{
	string s="The quick brown fox jumps over the lazy dog";
	string s1="abcdefghijklmnopqrstuvwxy";
	if(panagram(s))
	   cout<<s<<"\n is panagram\n";
	else
		cout<<s<<"\n is not panagram\n";
	if(panagram(s1))
	   cout<<"\n"<<s1<<"\n is panagram\n";
	else
		cout<<"\n"<<s1<<"\n is not panagram\n";
	return 0;
}

// Time complexity= O(n)
