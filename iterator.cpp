#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int> v = {4,5,3,78,98,43,23};
	vector<int>:: iterator i=v.begin();
	cout<<(*i)<<endl;
	i=next(i,2);
	cout<<(*i)<<endl;
	i=prev(i,1);
	cout<<(*i)<<endl;
	i=prev(i);
	cout<<(*i)<<endl;
	i=next(i);
	cout<<(*i)<<endl;
	advance(i,5);
	cout<<(*i)<<endl;
	return 0;
}
