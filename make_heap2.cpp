#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int>v{15,6,7,12,30};
	sort_heap(v.begin(),v.end(),greater<int>());//sort in ascending order
	cout<<"Elements of the vector in ascending are ";
	for(auto x: v)
		cout<<x<<" ";
	cout<<endl;
	sort_heap(v.begin(),v.end());//sort in descending order
	cout<<"Elements of the vector in descending are ";
	for(auto x: v)
		cout<<x<<" ";
	cout<<endl;
	int a[]={15,6,7,12,30};
	sort_heap(a,a+5,greater<int>());//sort in ascending order
	cout<<"Elements of the array in ascending are ";
	for(auto x: a)
		cout<<x<<" ";
	
	return 0;
}
