#include<iostream>
#include<set>

using namespace std;
int main()
{
	int a[]={34,56,78,2,3,4};
	cout<<"The elements of the set are ";
	for(int x:a)
		cout<<x<<" ";
	cout<<endl;
	int n=6;
	cout<<"The ceiling elements of the array are ";
	for(int i=0;i<n;i++)
	{
		int d=10000;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>=a[i])
			{
				d=min(d,a[j]);
			}
		}
		if(d==10000)
		cout<<-1<<" ";
		else
		cout<<d<<" ";
	}
	return 0;
}
