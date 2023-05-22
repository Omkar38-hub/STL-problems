#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
//MIN heap=smaller element is always at the top
int main()
{
	priority_queue<int,vector<int>,greater<int>>pq; //Now it is converted to MIN heap from  MAX heap
	pq.push(5);
	pq.push(7);
	pq.push(10);
	pq.push(9);
	cout<<"maximum element is "<<pq.top()<<endl;
	cout<<"size of priority queue is "<<pq.size()<<endl;
	cout<<"the elements of priority queue is  ";
	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
		
	}
	return 0;
}
