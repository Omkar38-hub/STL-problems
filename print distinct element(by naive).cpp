#include<iostream>
using namespace std;
void distinct(int a[],int n)
{
	cout<<"Distinct Elements of the array are ";
	for(int i=0;i<n;i++)
	{
		int j;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			   break;	
		}
		if(j==i)
		   cout<<a[i]<<" ";
	}
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
