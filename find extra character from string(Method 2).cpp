// Two strings are given of lengths n and n+1. The second string contains all the character of the first string, 
// but there is one extra character. The task is to find the extra character in the second string.

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
char find(string &str1,string &str2)
{
	int arr[26] = { 0 };
    for (int i = 0; i < 26; i++) {
        arr[str2[i] - 'a']++;
    }
    for (int i = 0; i < str1.length(); i++) {
        arr[str1[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (arr[i] == 1)
            return 'a' + i;
    }
}
int main()
{
	string s1="abcd";
	string s2="abcde";
	cout<<"Initially strings are "<<s1<<" and "<<s2<<endl;
	cout<<"The extra charater is "<<find(s1,s2);
	return 0;
}

//Time Complexity: As we are using only the loops for the whole operation, the time complexity of the solution would be O(n).

// Space Complexity: We have just created a new array of size 26, therefore the space complexity of this solution would be O(1).




