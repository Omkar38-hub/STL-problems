/*  PROBLEM
Geek Land has a population of N people and each peron's ability to rule the town is measured by a numeric value X.
The two people that can together rule Geek Land must be compatible with each other ie- the sum of digits of their ability X must be equal.
Their combined ability should be maximum amongst all the possible pairs of people. Find the combined ability of the Ruling Pair.

Input:
First line of input contains number of testcases T. For each testcase, there will be 2 lines. 
First line contains N which denoted the number of people in Geek Land. 
Second line contains N space separated integers denoting each person's ability X.

Output:
Print the combined ability of the Ruling Pair. If no such pair is possible print -1.

Your Task:
Complete the function RulingPair() which takes, the list of each person's ability, arr[] and N as inputs and 
returns the combined ability of the Ruling Pair. Return -1 if no such pair is possible. 
*/

//Initial Template for C++

#include <bits/stdc++.h> 
#include <unordered_map> 
using namespace std; 

 // } Driver Code Ends


//User function Template for C++

int RulingPair(vector<int> arr, int n) 
{
   sort(arr.begin(),arr.end());
   unordered_map<int,int>v;
   int x=0,i;
   for(i=arr.size()-1;i>=0;i--)
   {
     int p=arr[i],sum=0;  
     while (p!= 0) 
     { 
       sum = sum + p % 10; 
       p = p/10; 
      }
      //cout<<sum<<" "<<arr[i]<<endl;
      if(v.find(sum)==v.end())
         v[sum]=i;
      else
      {
          auto it=v.find(sum);
          //x=;
          x=max(x,(arr[i]+arr[it->second]));
          //break;
      }
   }
   if(x==0)
      x=-1;
    return x;
}

// { Driver Code Starts.
int main() 
{ 
	int n;
	cout<<"enter size of array  ";
	cin>>n;
	vector<int> arr(n);
	cout<<"enter the elements of the array\n";
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	cout<<"The Ruling apir sum is ";
	cout << RulingPair(arr,n)<<"\n";
	
	return 0; 
} 
/*

Example:
Sample Input:
5
55 23 32 46 88


4
18 19 23 15

Sample Output:
101
-1 

Explanation:
Testcase 1:
All possible pairs that are compatible with each other are- 
(23, 32) with digit sum 5 
(55, 46) with digit sum 10 
Out of these the maximum combined ability pair is (55, 46) i.e. 55 + 46 = 101

Testcase 2:
No two people are compatible with each other.
*/

