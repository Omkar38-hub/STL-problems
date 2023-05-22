//make_heap is just a data structure which points to the highest or lowest element and makes the elements access in O(1) time.
#include<iostream>
#include<algorithm>
#include<vector>
//by default make_heap form MAX HEAP
using namespace std;
int main()
{
	vector<int>v{2,5,1,8,30};
	make_heap(v.begin(),v.end());// The MAX  HEAP of given vector is
    cout<<"MAx element of vector "<<v.front()<<endl;
	make_heap(v.begin(),v.end(),greater<int>());// The MIN HEAP of given vector is
	cout<<"Min element of vector "<<v.front()<<endl;
	pop_heap(v.begin(),v.end(),greater<int>());// pop_heap function insert the front of vector which is minimum to the end of vector
	cout<<"Size of vector "<<v.size()<<endl;
	cout<<"Min element of vector "<<v.front()<<endl;
	cout<<"value of element at the end "<<v[(v.size())-1]<<endl;
	v[(v.size())-1]=1;
	push_heap(v.begin(),v.end(),greater<int>());//when we agin push the vector in MIN_HEP then modifien=d element also get included
	cout<<"Min element of vector "<<v.front()<<endl;//thats why we get minimum element at front
	return 0;
}
