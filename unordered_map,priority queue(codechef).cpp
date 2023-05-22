/*
Chefs from all over the globe gather each year for an international convention. Each chef represents some country.
 Please, note that more than one chef can represent a country.

Each of them presents their best dish to the audience. The audience then sends emails to a secret and secure mail server,
 with the subject being the name of the chef whom they wish to elect as the "Chef of the Year".

You will be given the list of the subjects of all the emails. Find the country whose chefs got the most number of votes, 
and also the chef who got elected as the "Chef of the Year" (the chef who got the most number of votes).

Note 1

If several countries got the maximal number of votes, consider the country with the lexicographically smaller name among them to be a winner. 
Similarly if several chefs got the maximal number of votes, consider the chef with the lexicographically smaller name among them to be a winner.

Note 2

The string A = a1a2...an is called lexicographically smaller then the string B = b1b2...bm in the following two cases:

there exists index i = min{n, m} such that aj = bj for 1 = j < i and ai < bi;
A is a proper prefix of B, that is, n < m and aj = bj for 1 = j = n.
The characters in strings are compared by their ASCII codes.

Refer to function strcmp in C or to standard comparator < for string data structure in C++ for details.

Input
The first line of the input contains two space-separated integers N and M denoting the number of chefs and the number of emails respectively.
 Each of the following N lines contains two space-separated strings, denoting the name of the chef and his country respectively.
  Each of the following M lines contains one string denoting the subject of the email.

Output
Output should consist of two lines. The first line should contain the name of the country whose chefs got the most number of votes.
 The second line should contain the name of the chef who is elected as the "Chef of the Year".

Constraints
1 = N = 10000 (104)
1 = M = 100000 (105)
Each string in the input contains only letters of English alphabets (uppercase or lowercase)
Each string in the input has length not exceeding 10
All chef names will be distinct
Subject of each email will coincide with the name of one of the chefs
Example 1
Input:
1 3
Leibniz Germany
Leibniz
Leibniz
Leibniz

Output:
Germany
Leibniz
Example 2
Input:
4 5
Ramanujan India
Torricelli Italy
Gauss Germany
Lagrange Italy
Ramanujan
Torricelli
Torricelli
Ramanujan
Lagrange

Output:
Italy
Ramanujan
Example 3
Input:
2 2
Newton England
Euclid Greece
Newton
Euclid

Output:
England
Euclid
*/



#include <bits/stdc++.h>
using namespace std;
struct mycmp
{
    bool operator()(pair<string,int>p1,pair<string,int>p2)
    {
        if(p1.second==p2.second)
          return p1.first>p2.first;
          
        return p1.second<p2.second;
    }
};
int main() {
	int n,m;
	string x,y;
	cin>>n>>m;
	unordered_map<string,string>m1;
	for(int i=0;i<n;i++)
	{
	    cin>>x>>y;
	    m1[x]=y;
	}
	unordered_map<string,int>m2;
	unordered_map<string,int>m3;
	for(int i=0;i<m;i++)
	{
	    cin>>x;
	    m2[x]++;
	    m3[m1[x]]++;
	}
	priority_queue<pair<string,int>,vector<pair<string,int>>,mycmp>pq1(m2.begin(),m2.end());
	priority_queue<pair<string,int>,vector<pair<string,int>>,mycmp>pq2(m3.begin(),m3.end());
	cout<<pq2.top().first<<endl;
	cout<<pq1.top().first<<endl;
	return 0;
}

