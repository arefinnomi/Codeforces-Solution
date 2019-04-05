#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <numeric>

#define nwl puts("");


using namespace std;


int main()
{
	int n, sum;

	cin>>n>>sum;

	int MIN[n], MAX[n];

	for(int i = 0; i < n; i++)
	{
		cin>>MIN[i]>>MAX[i];


	}


	int day[n];
	int cumulative_min[n], cumulative_max[n];

//	for(int i = 0; i < n; i++) for(int j = i + 1 ; j < n; j++)	if( MIN[i] > MIN[j]) swap(MIN[i], MIN[j]), swap(MAX[i], MAX[j]);
	partial_sum(MIN, MIN+n, cumulative_min);
	partial_sum(MAX, MAX+n, cumulative_max);


	if( cumulative_max[n-1] < sum || cumulative_min[n-1] > sum)
	{
		cout<<"NO"<<endl;
		return 0;
	}

	cout<<"YES"<<endl;

	int temp = sum;

	int store[n];

	for(int i = n-1 ; i; i--)
	{
		for( int x = MAX[i]; x >=  MIN[i]; x--)
		{
//				cout<<i <<" "<<x<<" "<<temp<<endl;
			if( temp - x >= cumulative_min[i-1] && temp - x <= cumulative_max[i-1] )
			{
				store[i] = x;
				temp -= x;
				break;
			}
		}
	}

	store[0] = temp;

	for(int i = 0; i < n; i++)cout<<store[i]<<" ";
//	main();
	return 0;
}
