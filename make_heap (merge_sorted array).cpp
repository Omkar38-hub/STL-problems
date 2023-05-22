//  Merge two sorted arrays in-place where no variable extra space must be used. 
// In-place means the merging should be done in constant extra space.

//Approach: As we have assumed the second array to be sorted, therefore the smallest element must be at the beginning of the array.
// Now traverse the first array and compare the first element of the first array with the 0th element of the second array. If the element in the first array is greater than the element at the second array, then
//  #Pop-out the element at b[]. This will move the element beyond the last position of second array.
// Swap the element at a[i] with the popped-out element.
// Push back the popped element to b[].

#include<iostream>
#include<algorithm>
using namespace std;
int merge(int a[],int b[],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]>b[0])
		{
			pop_heap(b,b+m,greater<int>());
			swap(a[i],b[m-1]);
			push_heap(b,b+m,greater<int>());
		}
	}
	sort_heap(b,b+m);
}
int main()
{
	int a[]={3,20,40};
	int b[]={2,11,10};
	cout<<"Initial A array is ";
	for(auto x: a)
	   cout<<x<<" ";
	cout<<endl;
	cout<<"Initial B array is ";
	for(auto x: b)
		cout<<x<<" ";
	cout<<endl;
	int n=sizeof(a)/sizeof(a[0]);
	int m=sizeof(b)/sizeof(b[0]);
	merge(a,b,n,m);
	cout<<"Final A array is ";
	for(int i=0;i<n;i++)
	   cout<<a[i]<<" ";
	cout<<endl;
	cout<<"Final B array is ";
	for(int j=0;j<m;j++)
	   cout<<b[j]<<" ";
	cout<<endl;
	return 0;
}
//time complexity:: O((m+n)*log(m))
