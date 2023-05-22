#include<iostream>
#include<unordered_map>
using namespace std;
void window (int a[],int n,int k)
{
	unordered_map<int,int>mp;
	cout<<"Distinct elements in the window of "<<k<<" are"<<endl;
	for(int i=0;i<k;i++)
		mp[a[i]]++;
	cout<<mp.size()<<" ";
	for(int i=k;i<n;i++)
	{
		mp[a[i-k]]--;
		if(mp[a[i-k]]==0)
			mp.erase(a[i-k]);
		mp[a[i]]++;
		cout<<mp.size()<<" ";
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
