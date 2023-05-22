#include<iostream>
#include<unordered_set>
using namespace std;
void frequency(int a[],int n)
{
	unordered_set<int>s;
	for(int i=0;i<n;i++)
		s.insert(a[i]);
	cout<<"Elements\tFrequency\t"<<endl;
	for(auto x: s)
	{
		int count=0;
		cout<<x<<"\t\t";
		for(int i=0;i<n;i++)
		{
			if(a[i]==x)
			  count++;
		}
		cout<<count<<endl;
	}
}
int main()
{
	int a[]={10,5,20,5,10,5};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"Array elements are\n";
	for(int x: a)
		cout<<x<<" ";
	cout<<endl<<endl;
	frequency(a,n);
	return 0;
}
