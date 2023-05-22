//The candiddate who has more number of votes is the winner of election
//here we not consider the case when two candidate has same number of votes then who is the winner
//here by defualt in this situation candidate who votes counted first is winner
#include<iostream>
#include<unordered_map>
#include<string.h>
using namespace std;
void winner(string a[],int n)
{
	unordered_map<string,int>mp;
	for(int i=0;i<n;i++)
		mp[a[i]]++;
	int max_freq=0;
	string winner;
	for(auto x: mp)
	{
		if(x.second>max_freq)
		{
			max_freq=x.second;
			winner=x.first;
		}
	}
	cout<<"The winner of the election is "<<winner<<endl;
}
int main()
{
	string a[]={"abc","xyz","abc","pqr"};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"Votes of elections are/// ";
	for(auto x: a)
		cout<<x<<" ";
	cout<<endl;
	winner(a,n);
	return 0;
}
