#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>arrival{800,700,600,500};
	vector<int>departure{840,820,830,530};
	for(int i=0;i<arrival.size();i++)
	{
		cout<<"Arrival "<<arrival[i]<<endl;
		cout<<"Departure "<<departure[i]<<endl;
		cout<<".....................................\n\n";
	}
	sort(arrival.begin(),arrival.end());
	sort(departure.begin(),departure.end());
	int i=1,j=0,result=1,current=1;
	while(i<arrival.size()&&j<departure.size())
	{
		if(arrival[i]<=departure[j])
		{
			current++;
			i++;
		}
		else
		{
			current--;
			j++;
		}
		result=max(result,current);
	}
	cout<<"Meeting maximum number of guest is "<<result<<endl;
	return 0;
}
