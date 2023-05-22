//here we take use of unordered map
//and priority queue using my compare function
#include<iostream>
#include<unordered_map>
#include<queue>
#include<vector>
#include<utility>
using namespace std;
struct mycomp
{
    bool operator()(pair<int,int>p1,pair<int,int>p2)
  {
	if(p1.second==p2.second)
	   return p1.first>p2.first;
	return p1.second<p2.second;
   }	
};

void find(int a[],int n,int k)
{
	unordered_map<int,int>mp;
	for(int i=0;i<n;i++)
	   mp[a[i]]++;
	//vector<pair<int,int>>v(mp.begin(),mp.end());
	priority_queue<pair<int,int>,vector<pair<int,int>>,mycomp>pq(mp.begin(),mp.end());
	cout<<k<<"most frequent items from an array is ";
	for(int i=0;i<k;i++)
	{
		cout<<pq.top().first<<" ";
		pq.pop();
	}
}
int main()
{
	int a[] = {3, 1, 4 , 4, 5, 2, 6,6, 1};
	int k,n=sizeof(a)/sizeof(a[0]);
	cout<<"enter number of most frequent element u want  ";
	cin>>k;
	find(a,n,k);
	return 0;
}
