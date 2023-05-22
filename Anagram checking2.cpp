//  An anagram of a string is another string that contains the same characters, only the order of characters can be different.
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
bool anagram(const string &s1,const string &s2)
{
	int n1=s1.length(),n2=s2.length();
	if(n1!=n2)
	   return false;
	char v[256]={0};
	for(int i=0;i<n1;i++)
	    v[s1[i]]++;
	for(int i=0;i<n2;i++)
	    v[s2[i]]--;
	for(int i=0;i<256;i++)
	{
		if(v[i]!=0)
		   return false;
	}
	return true;
}
int main()
{
    string s1="listen";
	string s2="silent";
	string s3="abacbcc";
	string s4="ccbbbaa";
	if(anagram(s1,s2))
	    cout<<s1<<" and "<<s2<<" are anagram\n";
	else
	    cout<<s1<<" and "<<s2<<" are not anagram\n";
	
	if(anagram(s3,s4))
	    cout<<"\n"<<s3<<" and "<<s4<<" are anagram\n";
	else
	    cout<<"\n"<<s3<<" and "<<s4<<" are not anagram\n";
	return 0;
}

//Time complexity  == O(n)
