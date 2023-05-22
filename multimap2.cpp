#include<iostream>
#include<map>
using namespace std;
int main()
{
	multimap<int,int>mp;
	mp.insert({ 2, 30 }); 
    mp.insert({ 1, 40 }); 
    mp.insert({ 2, 60 }); 
    mp.insert({ 2, 20 }); 
    mp.insert({ 1, 50 }); 
    mp.insert({ 4, 50 }); 

    // when 2 is present 
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl;
    auto it = mp.lower_bound(2); 
    cout << "The lower bound of key 2 is "; 
    cout << (*it).first << " "
        << (*it).second << endl; 

    // when 3 is not present 
    it = mp.lower_bound(3); 
    cout << "The lower bound of key 3 is "; 
    cout << (*it).first << " "
        << (*it).second << endl; 

    // when 5 exceeds 
    it = mp.lower_bound(5); 
    cout << "The lower bound of key 5 is "; 
    cout << (*it).first << " "
        << (*it).second << endl;
    it = mp.upper_bound(2); 
    cout << "The upper bound of key 2 is "; 
    cout << (*it).first << " " << (*it).second << endl; 

    // when 3 is not present 
    it = mp.upper_bound(3); 
    cout << "The upper bound of key 3 is "; 
    cout << (*it).first << " " << (*it).second << endl; 

    // when 5 is exceeds the maximum key 
    it = mp.upper_bound(5); 
    cout << "The upper bound of key 5 is "; 
    cout << (*it).first << " " << (*it).second;
    return 0;
}
