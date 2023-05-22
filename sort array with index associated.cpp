#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printwith_index(int a[],int n)
{
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++)
	  v.push_back({a[i],i});
	
	sort(v.rbegin(),v.rend());
	cout<<"sorted array in descending order with index associated with it\n";
	cout << "\nElement\t"
         << "index" << endl;
	for(auto x:v)
	{
		cout<<x.first<<"\t"<<x.second<<endl;
	}
}
int main()
{
	int a[]={12,10,45,2};
	int n=sizeof(a)/sizeof(a[0]);
	printwith_index(a,n);
	return 0;
}
