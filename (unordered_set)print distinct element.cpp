#include<iostream>
#include<unordered_set>
using namespace std;
void distinct(int a[],int n)
{
	unordered_set<int>s;
	for(int i=0;i<n;i++)
	    s.insert(a[i]);
	cout<<"Distinct Elements of the array are ";
	for(auto x: s)
	   cout<<x<<" ";
	cout<<endl;
}
int main()
{
	int a[]={4,8,5,8,7,5};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"Initial elemenets os array are ";
	for(auto x: a)
		cout<<x<<"  ";
	cout<<endl;
	distinct(a,n);
	return 0;
}

//Time complexity O(n)
