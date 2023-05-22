// Alternate way to create a MIN_HEAP using a simple method. The trick lies in converting all the array elements into its negative counterpart.
// This code uses the syntax of MAX_HEAP but the effect is seen that of MIN_HEAP.
#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int>v={1,2,3,4,5};
	for(auto &x:v)// helps in converting to MIN heap from  MAX heap
	   (x)=-(x);
	priority_queue<int>pq(v.begin(),v.end()); 
	cout<<"maximum element is "<<-pq.top()<<endl;
	cout<<"size of priority queue is "<<pq.size()<<endl;
	cout<<"the elements of priority queue is  ";
	while(!pq.empty()){
		cout<<-pq.top()<<" ";
		pq.pop();
		
	}
	return 0;
}
