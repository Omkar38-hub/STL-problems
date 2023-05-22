// Two strings are given of lengths n and n+1. The second string contains all the character of the first string, 
// but there is one extra character. The task is to find the extra character in the second string.

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
char find(string &s1,string &s2)
{
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	int n=s1.length();
	for(int i=0;i<n;i++)
	{
		if(s1[i]!=s2[i])
		  return s2[i];
	}
	return s2[n];
}
int main()
{
	string s1="abcd";
	string s2="abcde";
	cout<<"Initially strings are "<<s1<<" and "<<s2<<endl;
	cout<<"The extra charater is "<<find(s1,s2);
	return 0;
}
