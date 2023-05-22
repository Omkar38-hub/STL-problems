#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int>v={1,2,3,4,5};
	priority_queue<int>pq(v.begin(),v.end()); // time complexity for aking priority queue is  O(N)
	//By default it is  MAX heap
	cout<<"maximum element is "<<pq.top()<<endl;
	cout<<"size of priority queue is "<<pq.size()<<endl;
	cout<<"the elements of priority queue is  ";
	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
		
	}
	return 0;
}
