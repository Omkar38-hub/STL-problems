// Two strings are given of lengths n and n+1. The second string contains all the character of the first string, but there is one extra character. 
// The task is to find the extra character in the second string.
// Two strings are given of lengths n and n+1. The second string contains all the character of the first string, 
// but there is one extra character. The task is to find the extra character in the second string.

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
char find(string &str1,string &str2)
{
	int n=str1.length();
	char res;
	for(int i=0;i<n;i++)
	   res=res^str1[i]^str2[i];
	
	res=res^str2[n];
	return res;
}
int main()
{
	string s1="abcd";
	string s2="abcde";
	cout<<"Initially strings are "<<s1<<" and "<<s2<<endl;
	cout<<"The extra charater is "<<find(s1,s2);
	return 0;
}

// Time Complexity: The time complexity of the solution would be O(n).

// Space Complexity: The space complexity of this solution would be O(1).




