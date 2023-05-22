#include <iostream>
#include <algorithm>
#include <set>
using namespace std; 
int main() 
{ 
    multiset<int> s; 

    // Function to insert elements 
    // in the multiset container 
    s.insert(1); 
    s.insert(3); 
    s.insert(3); 
    s.insert(5); 
    s.insert(4);  
    
    // Use count() to count number of occurrences of 15
    cout <<"15 occurs " << s.count(3) 
        << " times in container.\n"; 
        
    // Erase all occurrences of 15
    s.erase(3);
    
    // Print again count of 15
    cout <<"15 occurs " << s.count(3) 
        << " times in container.\n"; 
    
    // Print Size of multiset
    cout<<"Size of multiset: "<<s.size();
	auto it = s.lower_bound(2); 
    cout << "\nThe lower bound of key 2 is "; 
    cout << (*it) << endl; 

    // when 3 is not present 
    // points to next greater after 3 
    it = s.lower_bound(3); 
    cout << "The lower bound of key 3 is "; 
    cout << (*it) << endl; 

    // when 5 exceeds the max element in multiset 
    it = s.lower_bound(7); 
    cout << "The lower bound of key 7 is "; 
    cout << (*it) << endl; 
    it = s.upper_bound(3); 
    cout << "\nThe upper bound of key 3 is "; 
    cout << (*it) << endl; 

    // when 2 is not present 
    // points to next greater after 2 
    it = s.upper_bound(2); 
    cout << "The upper bound of key 2 is "; 
    cout << (*it) << endl; 

    // when 10 exceeds the max element in multiset 
    it = s.upper_bound(10); 
    cout << "The upper bound of key 10 is "; 
    cout << (*it) << endl; 
    return 0; 
} 

