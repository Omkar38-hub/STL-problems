#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str="11,21,31,41,51,61";
	vector<int>v;
	stringstream ss(str);
	for(int i;ss>>i;)// Get the string to be taken as input in stringstream
    {
    	v.push_back(i);
    	if(ss.peek()==',')
    	   ss.ignore();
	}
	cout<<"Elements are:- ";
	for(auto x: v)
	   cout<<x<<" ";
}
