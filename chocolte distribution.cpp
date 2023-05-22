//Given an array of n integers where each value represents the number of chocolates in a packet.
//Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that:
// (1) Each student gets one packet.
// (2) The difference between the number of chocolates in the packet with maximum chocolates and packet with minimum chocolates
      // given to the students is minimum.
#include<bits/stdc++.h>
using namespace std;
int mindif(int a[],int n,int m)
{
	if(n==0||m==0)
	   return 0;
	else if(n<m)
	   return 0;
	sort(a,a+n);
	int min=INT_MAX,first,last;
	for(int i=0;i<n-m+1;i++)
	{
		int diff=a[i+m-1]-a[i];
		if(diff<min)
		{
			first=i;
			last=i+m-1;
			min=diff;
		}
	}
	cout<<"The minimum difference between chocolates are "<<min<<endl;
	cout<<"The distributed chocolates among "<<m<<" children are ";
	for(int i=first;i<=last;i++)
	    cout<<a[i]<<" ";
   cout<<"\nThank You";
}
int main()
{
	int a[]={3,4,1,9,56,7,9,12};
	int n=sizeof(a)/sizeof(a[0]);
	int m=5;
	mindif(a,n,m);
	return 0;
}

//Time Complexity: O(n Log n) as we apply sorting before subarray search
