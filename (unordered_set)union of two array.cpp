#include<iostream>
#include<unordered_set>
using namespace std;
void printUnion(int a[],int b[],int m,int n)
{
	unordered_set<int>s;
	cout<<"Union of two array is\n";
	for(int i=0;i<m;i++)
	{
		cout<<a[i]<<" ";
		s.insert(a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(s.find(b[i])==s.end())
		{
			cout<<b[i]<<" ";
		}
	}
}
int main()
{
	int a[] = { 7, 6, 13, 10 };
    int m = sizeof(a)/sizeof(a[0]);

    // Second array arr2[]
    int b[] = { 10, 9, 4, 5, 7, 20 };
    int n = sizeof(b)/sizeof(b[0]);
    printUnion(a,b, m, n);
    return 0;
}
