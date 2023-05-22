#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[]={56,7,43,34,9,87};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	  cout<<arr[i]<<" ";
	cout<<endl;
	if(binary_search(arr,arr+n,8))
	   cout<<"present\n";
	else
	   cout<<"Not present\n";
	return 0;
}
