#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[]={1, 2, 5, 4, 3};
	int n=5;
	cout<<"Initial array are ";
	for(auto x: a)
	    cout<<x<<" ";
	cout<<endl;
	int x;
	for(int i=n-1;i>=0;i--)
	{
		if((a[i-1])<a[i])
		{
			x= i-1;
			break;
		}
	}
	int p;
    int just_greater=INT_MAX;
    //finding just greater element ha element at a[x]
	for(int j=x+1;j<n;j++)
	{
		if(a[j] > a[x] and just_greater > a[j])
		{
			just_greater = a[j];
			p=j;
		}
          
	}
    swap(a[x],a[p]);
    vector<int>v;
    for(int i=0;i<=x;i++)
       v.push_back(a[i]);
    for(int i=n-1;i>x;i--)
       v.push_back(a[i]);
    cout<<"the next permutation is ";
    for(auto x: v)
	    cout<<x<<" ";
}
