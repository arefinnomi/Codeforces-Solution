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

#define nwl puts("");

typedef unsigned int UI;
typedef long long int LLI;
typedef unsigned long long int ULLI;
typedef long double LLF;
typedef double LF;


using namespace std;


int main()
{
	int temp;

	int n;

	cin>>n;

	int ary[2*n+7];

	for(int i = 0; i < 2*n + 7; i++) ary[i] = 0;


	vector < pair < int , pair < int, int >  > > store;

	for(int i = 2; i <= n * 2; i++)
	{
		for(int j = 1 ; j < i; j++)
		{
			cin>>temp;
			store.push_back( make_pair(temp, make_pair(i,j)));
		}
	}
	sort(store.begin(), store.end());

	int x, y;
	int value;

	for(int i = store.size()-1; i >= 0; i--)
	{
		value = store[i].first;
		x = store[i].second.first;
		y = store[i].second.second;


		if( ary[x] == 0 && ary[y] == 0 )
		{
			ary[x] = y;
			ary[y] = x;
		}
	}

	for(int i = 1; i <= 2 * n; i++) cout<<ary[i]<<" ";

	return 0;
}
