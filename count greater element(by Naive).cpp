#include<iostream>
#include<map>
using namespace std;
int main()
{
	int a[]={55,13,3,23,5,2,98};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"Array element is \n";
	for(int x: a)
		cout<<x<<" ";
	cout<<endl;
	cout<<"Count of greater number of particular element is \n";
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(a[j]>a[i])
			{
				count++;
			}
		}
		cout<<count<<" ";
	}
	return 0;
}
