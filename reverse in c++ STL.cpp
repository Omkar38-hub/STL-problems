#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[]={10,20,30,40,50};
	cout<<"Initial Elements are ";
	for(auto x: a)
	   cout<<x<<" ";
	cout<<endl;
	reverse(a,a+5);
	cout<<"Finally reversed Elements are ";
	for(auto x: a)
	   cout<<x<<" ";
	cout<<endl;
	vector<int>v{10,20,30,40,50};
	cout<<"\nInitial Elements are ";
	for(auto x: v)
	   cout<<x<<" ";
	cout<<endl;
	reverse(v.begin(),v.end());
	cout<<"Finally reversed Elements are ";
	for(auto x: v)
	   cout<<x<<" ";
	cout<<endl;
	
	string str="GEEKS";
	cout<<"\nInitial string is "<<str<<endl;
	reverse(str.begin(),str.end());
	cout<<"Finally reversed string is "<<str<<endl;
	return 0;
}

//The reverse() function takes linear time for the whole operation, O(n).
