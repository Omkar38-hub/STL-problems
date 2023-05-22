#include<iostream>
#include<algorithm>
using namespace std;
//The merge() is a built-in function in C++ STL, that takes two sorted containers and merge them.
int main()
{
	vector<int>v1{10,20,40};
	vector<int>v2{5,15,30};
	vector<int>v3(6);
	merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
	cout<<"After merging two sorted vector we have ";
	for(auto x: v3)
		cout<<x<<" ";
	cout<<endl;
    int ar1[] = { 10, 20, 30 };
    int ar2[] = { 5, 15, 40, 80 };
    int ar3[7];

    // Performing merge operation
    merge(ar1, ar1 + 3, ar2, ar2 + 4, ar3);

    cout<<"\nAfter merging two sorted array we have ";
    for (int x : ar3)
        cout << x << " ";
    return 0;
}

//Time complexity: O(m+n)
