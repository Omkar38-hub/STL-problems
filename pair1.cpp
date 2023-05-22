#include<iostream>
#include<utility>
using namespace std;
int main()
{
	pair<int,string>p1(4,"G4G");
	pair<double,char>p2=make_pair(7.8,'G');
	pair<double,char>p3;//first is declared to 0 in double,int and float
	pair<string,string>p4;//first is declared to NUll In char and string
	cout<<p1.first<<" "<<p1.second<<endl;
	cout<<p2.first<<" "<<p2.second<<endl;
	cout<<p3.first<<" "<<p3.second<<endl;
	cout<<p4.first<<" "<<p4.second<<endl;
	return 0;
}
