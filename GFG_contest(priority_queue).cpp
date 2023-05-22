/* PROBLEM
Geek has R units of money and goes to a bakery to have some pastries. Every pastry costs him 1 unit of money and there
 is an infinte supply of N different kinds of pastries.
The ith pastry has some ai and bi value associated with it. When Geek eats the ith pastry for the first time,
 he gets ai amount of happiness. When he eats the ith pastry for the second time, he gets (ai - bi) amount of happiness and so on.
  When he eats the ith pastry for the kth time, the amount of happiness he gets is equal to max (0, ai - (k-1)*bi). 
Find the maximum amount of happiness Geek can get with the amount of money he has. 

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow.
 The first line of each test case contains two space separated integer values of N and R.
  The second line contains N space separated pairs of integer (ie, 2*N integers) denoting the values of ai and bi for each pastry. 

Output: 
Print a single integer denoting the maximum amount of happiness that Geek can gain with the given amount of money he has.
*/
#include<bits/stdc++.h>
using namespace std;
//User function Template for C++

int maxHappiness (int a[], int b[], int n, int R)
{
    int happy=0,count=0;
    pair<int,int>p[n];
    for(int i=0;i<n;i++)
    {
        p[i]=make_pair(a[i],b[i]);
    }
    priority_queue<pair<int,int>>pq(p,p+n);
    while(count<R)
    {
        happy+=pq.top().first;
        pair<int,int>p;
        int x=pq.top().first-pq.top().second;
        if(x<0)
         x=0;
        p=make_pair(x,pq.top().second);
        pq.pop();
        pq.push(p);
        count++;
    }
    return happy;
}
int main()
{
		int n,R;
		cout<<"enter the number of pasties  ";
		cin>>n;
		cout<<"enter the money a baby have ";
		cin>>R;
		int *a=new int[n];
		int *b=new int[n];
		cout<<"enter "<<(2*n)<<" happiness values\n";
		for(int i=0;i<n;i++)
		    cin>>a[i]>>b[i];
		cout<<"Maximum hapiness is ";
		cout<<maxHappiness(a,b,n,R)<<endl;
}
/*
Inputs
  n=2
  R=3
   8 2 7 2
output:=21 
   
Inputs 
   n=2
   R=10
   5 1 10 5
   
outpu:=30
*/
