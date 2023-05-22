//sum of two elements of an array is equal to given sum
#include<iostream>
#include<unordered_set>
using namespace std;
void pair_Sum(int a[],int n,int sum)
{
	unordered_set<int>s;
	for(int i=0;i<n;i++)
	{
		if(s.find(sum-a[i])!=s.end())
		{
			cout<<"Yes"<<endl;
			return ;
		}
		else
		    s.insert(a[i]);
	}
	cout<<"No"<<endl;
}
int main()
{
	int a[]={3,2,8,15,-8};
	int n=sizeof(a)/sizeof(a[0]);
	int sum=17;
	cout<<"Initial elements of the array is ";
	for(int x: a)
	    cout<<x<<" ";
	cout<<endl;
	pair_Sum(a,n,sum);
	return 0;
}
