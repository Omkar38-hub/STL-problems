#include<iostream>
#include <queue>
using namespace std; 
struct Person {    
		int age; 
		float ht;        
	Person(int a, float h)  
	{     
	   age = a;      
	    ht = h;   
    }
 };
struct myCmp {    
	bool operator()(Person const& p1, Person const& p2)  
	{        return p1.ht > p2.ht;   
    }
}; 
// Drivers Method
int main(){ 
 // Creating a priority queue
  priority_queue<Person, vector<Person>, myCmp> pq;
  Person p1(21, 5);
  pq.push(p1);
  Person p2(22, 6);  
  pq.push(p2);
   Person p3(23, 7);    
   pq.push(p3);    
    // Displaying the top elements
	while (pq.empty() == false) {        
	  cout << pq.top().ht << " ";        
	  pq.pop(); 
   } 
   
return 0;
}
