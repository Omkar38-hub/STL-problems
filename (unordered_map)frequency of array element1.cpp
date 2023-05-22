//here we are printing without taking care of order of elements and there corresponding frequency
#include<iostream>
#include<unordered_map>
using namespace std;
void frequency(int a[],int n)
{
	unordered_map<int,int>mp;
	for(int i=0;i<n;i++)
		mp[a[i]]++;
	cout<<"Elements\tFrequency\t"<<endl;
	for(auto x: mp)
	{
		cout<<x.first<<"\t\t"<<x.second<<endl;
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
