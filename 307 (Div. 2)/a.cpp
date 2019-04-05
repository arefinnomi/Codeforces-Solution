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


using namespace std;


int main()
{
	int temp[2001] = {0};
	int Rank[2001] = {0};

	int n;

	cin>>n;

	int a_main[n];


	for(int i = 0; i < n; i++)
	{
		cin>>a_main[i];
		temp[a_main[i]]++;
	}

	int pls = 1;


	for(int i = 2000; i >= 0; i--)
	{
		if( temp[i] ) Rank[i] = pls;

		pls += temp[i];
	}


	for(int i = 0; i < n; i++) cout<< Rank[a_main[i]]<<" ";


//	main();
	return 0;
}
