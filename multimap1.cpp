#include<iostream>
#include<map>
using namespace std;
int main()
{
	multimap<int, int> mp;
    mp.insert({10,20});
    mp.insert({5, 50});
    mp.insert({10,25});
    
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl;
    cout<<"Count of the key 10: "<<mp.count(10);
    
    // Erase the key 10
    mp.erase(10);
    
    cout<<"\nCount of the key 10: "<<mp.count(10);
    return 0;
}
