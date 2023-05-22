//here size of array is in multiple of k
#include<iostream>
#include<unordered_set>
using namespace std;
void distinct(int a[],int n,int k)
{
	unordered_set<int>s;
	for(int i=0;i<n;i++)
		s.insert(a[i]);
	int d=s.size();
	cout<<"Number of distinct elements are  ";
	if(d>=(n/k))
		cout<<(n/k);
	else
	    cout<<d<<endl;
}
int main()
{
	int a[]={1,1,2,1,3,1};
	int k=2;
	int n=sizeof(a)/sizeof(a[0]);
	distinct(a,n,k);
	return 0;
}
