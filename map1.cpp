//map store key value pair in the container 
#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int,int>mp;
	mp.insert({10,200});
	mp.insert({2,800});
	mp.insert({30,780});
	mp[50];  // it doesnot exists, it will insert defaut value of int
	mp[70]=7800;
	cout<<"elements of the map is\n";
	for(auto x: mp)  // print in ascending order by default accorging to key
	{
		cout<<x.first<<" ";
	   cout<<x.second<<endl;
	} 
	mp[50]=1200;
	cout<<"\nNow the elements of map are\n";
	for(auto it=mp.begin();it!=mp.end();it++) {
		cout<<it->first<<" ";
		cout<<it->second<<endl;
	}
	if(mp.find(2)!=mp.end())
		cout<<"\n2 is Found\n";
	else
		cout<<"\n2 is Not Found\n";
	cout<<"\nElements after 30 are \n";
	for(auto it=mp.find(30);it!=mp.end();it++)
	{
		cout<<it->first<<" ";
		cout<<it->second<<endl;
	} 
	auto it = mp.upper_bound(2);
    cout << "The upper bound of key 2 is ";
    cout << (*it).first << " " << (*it).second << endl;

    // when 11 is not present
    it = mp.upper_bound(11);
    cout << "The upper bound of key 11 is ";
    cout << (*it).first << " " << (*it).second << endl;

    // when 71 is exceeds the maximum key, so size
    // of mp is returned as key and value as 0.
    it = mp.upper_bound(71);
    cout << "The upper bound of key 71 is ";
    cout << (*it).first << " " << (*it).second<<endl;
    it = mp.lower_bound(2);
    cout << "The lower bound of key 2 is ";
    cout << (*it).first << " " << (*it).second << endl;

    // when 32 is not present
    // points to next greater after 32
    it = mp.lower_bound(32);
    cout << "The lower bound of key 32 is ";
    cout << (*it).first << " " << (*it).second;

    // when 75 exceeds
    it = mp.lower_bound(75);
    cout << "\nThe lower bound of key 75 is ";
    cout << (*it).first << " " << (*it).second<<endl;
    cout<<"\nThe size of map is "<<mp.size()<<endl;
    mp.erase(10);
    cout<<"elements of the map is\n";
	for(auto x: mp)  // print in ascending order by default accorging to key
	{
		cout<<x.first<<" ";
	   cout<<x.second<<endl;
	} 
	cout<<"\nThe size of map is "<<mp.size()<<endl;
	return 0;
}
