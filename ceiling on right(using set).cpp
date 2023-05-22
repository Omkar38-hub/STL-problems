#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<int>s;
	int a[]={34,56,78,2,3,4};
	int n=6;
	cout<<"The elements of the set are ";
	for(int x:a)
		cout<<x<<" ";
	cout<<endl;
	int res[n];
	for(int i=n-1;i>=0;i--)
	{
		auto it=s.lower_bound(a[i]);
		if(it==s.end())
			res[i]=-1;
		else
			res[i]=(*it);
		s.insert(a[i]);
	}
	cout<<"Elements after finding ceiling of array are ";
	for(int i=0;i<n;i++)
		cout<<res[i]<<" ";
	cout<<endl;
	return 0;
}
