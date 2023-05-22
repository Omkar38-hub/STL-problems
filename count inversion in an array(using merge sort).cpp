
//// here we can find the number of pair which is not satisfying sorted order in an array

// C++ program to Count
// Inversions in an array
// using Merge Sort



#include<bits/stdc++.h>
using namespace std;
int merge(int a[],int l,int mid,int h)
{
	int i=l,count=0;
	int j=mid;
	int k=l;
	int b[h+1];
	while(i<=mid-1 and j<=h)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			count=count+(mid-i);
			b[k]=a[j];
			j++;
		}
		k++;
	}
		while(j<=h)
		{
			b[k]=a[j];
			j++;
			k++;
		}

		while(i<=mid-1)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	for(int p=l;p<=h;p++)
	    a[p]=b[p];
	return count;
}
int mergesort(int a[],int l,int h)
{
	int mid,count=0;
	if(l<h)
	{
		mid=(l+h)/2;
		count+=mergesort(a,l,mid);
		count+=mergesort(a,mid+1,h);
		count+=merge(a,l,mid+1,h);
	}
	return count;
}

int main()
{
	int a[]={20,30,25,50,10,60,40};
	int n=sizeof(a)/sizeof(a[0]);
	int temp[n];
	cout<<"The number of pair is "<<mergesort(a,0,n-1);
	return 0;
}
