//here we take use of unordered map
//and vector using my compare function
#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

bool mycomp(pair<int,int>p1,pair<int,int>p2)
  {
	if(p1.second==p2.second)
	   return p1.first<p2.first;
	return p1.second>p2.second;
   }	

void find(int a[],int n,int k)
{
	unordered_map<int,int>mp;
	for(int i=0;i<n;i++)
	   mp[a[i]]++;
	vector<pair<int,int>>v(mp.begin(),mp.end());
	sort(v.begin(),v.end(),mycomp);
	//priority_queue<pair<int,int>,vector<pair<int,int>>,mycomp>pq(mp.begin(),mp.end());
	cout<<k<<"most frequent items from an array is ";
	for(int i=0;i<k;i++)
	{
		cout<<v[i].first<<" ";
		//pq.pop();
	}
}
int main()
{
	int a[] = {3, 1,1, 4 , 4, 5, 2, 6,6, 1};
	int k,n=sizeof(a)/sizeof(a[0]);
	cout<<"enter number of most frequent element u want  ";
	cin>>k;
	find(a,n,k);
	return 0;
}
