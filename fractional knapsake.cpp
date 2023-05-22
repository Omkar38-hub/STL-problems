//We have given weights and value of items. Alongwith that we have knapsake with some capacity
///In the problem we have to pick maximum value in the knapsake(bag).Consider item as in power form becoz if total value of particular item 
// is not feasible then we will take fraction of that item to full our knapsake

//Approach
//we will sort pair of array by order of maximum value per weight
//ouput the maximum value that to be collected in knapsake

#include<bits/stdc++.h>
using namespace std;

bool mycom(pair<int,int>p1,pair<int,int>p2)
{
	double r1=(double)p1.first/p1.second;
	double r2=(double)p2.first/p2.second;
	return r1>r2;
}
double fknap(int w,pair<int,int>a[],int n)
{
	double res=0.0;
	sort(a,a+n,mycom);
	for(int i=0;i<n;i++)
	{
		if(a[i].second<=w)
		{
			res+=a[i].first;
			w=w-a[i].second;
		}
		else
		{
			res+=a[i].first*((double)w/a[i].second);
			break;
		}
	}
	return res;
}
int main()
{
   pair<int,int>a[3];            //=({600,50},{500,20},{400,30});
   cout<<"Enter 3 value weight pair\n";
   for(int i=0;i<3;i++)
   {
   	  cout<<"\nEnter the value ";
   	  cin>>a[i].first;
   	  cout<<"Enter corresponding weight ";
   	  cin>>a[i].second;
	}
	int w;//70
	cout<<"\nEnter the capacity of knapsake ";
	cin>>w;
	cout<<"\nMaximum value to be collected "<<fknap(w,a,3);	
} 
