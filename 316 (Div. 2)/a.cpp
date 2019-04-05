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

int no_win[100];

int main()
{
	int n, m;

	cin >> n >> m;

	int ary[n];

	int temp;

	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++) scanf("%d", ary + j );


		temp = 0;

		for(int j = 1; j < n; j++) if( ary[temp] < ary[j] ) temp = j;
		no_win[temp]++;
	}


	int win = 0;

	for(int i = 1; i < n; i++)
	{
		if( no_win[win] < no_win[i] ) win = i;
	}


	cout<<win+1<<endl;
		return 0;
}
