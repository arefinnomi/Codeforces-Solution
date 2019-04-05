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
	int n;
	cin>>n;

	int ary[n];



	for(int i = 0; i < n; i++)
	{
		scanf("%d", ary+i);

		while( ary[i] % 2 == 0) ary[i] /= 2;
		while( ary[i] % 3 == 0) ary[i] /= 3;

	}


	for(int i = 0; i <  n -1; i++)
	{

		if( ary[i+1] != ary[i] )
		{
			cout<<"No\n";
			return 0;
		}
	}

	cout<<"Yes\n";

	return 0;
}
