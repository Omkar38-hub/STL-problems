#include<iostream>
using namespace std;
void window(int a[],int n,int k)
{
	cout<<"Distinct elements in the window of "<<k<<" are"<<endl;
	for(int i=0;i<n-k+1;i++)
	{
		int count=0;
		for(int j=0;j<k;j++)
		{
			bool flag=false;
			for(int p=0;p<j;p++)
			{
				if(a[i+j]==a[p+i])
				{
					flag=true;
					break;
				}
			}
			if(flag==false)
				count++;
		}
		cout<<count<<" ";
	}
	
}
int main()
{
	int a[]={10,20,20,10,30,40,10};
	int n=sizeof(a)/sizeof(a[0]);
	int k=4;//so the numeber of window with k=4 is (n-k+1)
	cout<<"Initial elements of an array are ";
	for(int x: a)
		cout<<x<<" ";
	cout<<endl;
	window(a,n,k);
	return 0;
}
