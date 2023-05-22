#include<iostream>
#include<unordered_set>
using namespace std;
void repeat(int a[],int n)
{
	unordered_set<int>s;
	cout<<"The repeated elemenst from the array is ";
	for(int i=0;i<n;i++)
	{
		if(s.find(a[i])==s.end())
		   s.insert(a[i]);
		else
		   cout<<a[i]<<" ";
	}
}
int main()
{
	int a[]={10,8,10,7,7,6};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"Initial elements of the array is ";
	for(int x: a)
	    cout<<x<<" ";
	cout<<endl;
	repeat(a,n);
	return 0;
}
