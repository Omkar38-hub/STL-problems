#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"The Bell triangle is\n";
	vector<int>v1;
	v1.push_back(1);
	vector<int>v2;
	int n;
	cout<<"\nEnter the number of rows ";
	cin>>n;
	while(n--)
	{
		v2.push_back(v1[v1.size()-1]);
		for(int i=0;i<v1.size();i++)
		  v2.push_back(v2[i]+v1[i]);
		for(auto x: v1)
		  cout<<x<<" ";
		cout<<endl;
		v1=v2;
		v2.clear();
	}
	return 0;
}
