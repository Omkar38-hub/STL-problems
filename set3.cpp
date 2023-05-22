#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    set<int> s; 
    s.insert(1); 
    s.insert(4); 
    s.insert(2); 
    s.insert(5); 
    s.insert(6); 
    cout << "The set elements are: "; 
    for (auto it = s.begin(); it != s.end(); it++) 
        cout << *it << " "; 
    cout<<endl;
    auto it = s.lower_bound(2); 
    cout << "\nThe lower bound of key 2 is "; 
    cout << (*it) << endl; 

    // when 3 is not present 
    // points to next greater after 3 
    it = s.lower_bound(3); 
    cout << "The lower bound of key 3 is "; 
    cout << (*it) << endl; 

    // when 8 exceeds the max element in set 
    it = s.lower_bound(8); 
    cout << "The lower bound of key 8 is "; 
    cout << (*it) << endl; 
    
    // when 2 is present 
    // points to next element after 2 
    it = s.upper_bound(2); 
    cout << "\nThe upper bound of key 2 is "; 
    cout << (*it) << endl; 

    // when 3 is not present 
    // points to next greater after 3 
    it = s.upper_bound(3); 
    cout << "The upper bound of key 3 is "; 
    cout << (*it) << endl; 
    
    it = s.upper_bound(8); 
    cout << "The upper bound of key 8 is "; 
    cout << (*it) << endl; 

    return 0; 
} 

