#include<iostream>
#include<set>
#define INT_MAX 12000
#define INT_MIN 000
using namespace std;
set<int>s;
void insert(int n)
{
	s.insert(n);
}
void delet(int n)
{
	s.erase(n);
}
int search(int n)
{
	return(s.find(n)!=s.end());
}
int getceiling(int n)
{
	auto itr=s.lower_bound(n);
	if(itr==s.end())
	  return -1;
	else
		return (*itr);
}
int getfloor(int n)
{
	auto itr=s.upper_bound(n);
	if(itr==s.begin())
	{
		if((*itr)==n)
			return (*itr);
		else
			return -1;
	}
	else
	{
		if(itr!=s.end()&&(*itr)==n)
			return (*itr);
		else
		   {
		   	itr--;
		   	return (*itr);
		   }
	}
}
int main()
{
	insert(10);
	insert(20);
	insert(15);
	insert(5);
	insert(25);
	cout<<"elements are ";
	for(int x:s)
		cout<<x<<" ";
	cout<<endl;
	if(search(15))
	     cout<<"present"<<endl;
    else
         cout<<"Not present\n";
	delet(15);
	if(search(15))
	     cout<<"present"<<endl;
    else
         cout<<"Not present\n";
	cout<<getfloor(6)<<endl;;
	cout<<getfloor(5)<<endl;
	cout<<getceiling(6)<<endl;
	cout<<getceiling(25)<<endl;
	cout<<getceiling(100)<<endl;
	cout<<getfloor(1)<<endl;
	return 0;
}
