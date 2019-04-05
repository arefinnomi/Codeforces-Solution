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
	int c;

	cin>>n>>c;

	int ary[n-1];
	for(int i = 0; i < n -1; i++) cin>>ary[i];

	sort(ary, ary + n - 1);

	int cont = 0, i;

	while( c + cont <= ary[n-1-1])
	{
		ary[n-1-1]--;
		cont++;
		i = n - 1 - 1;

		while( ary[ i ] < ary[ i - 1] && i)
		{
			swap(ary[i], ary[i-1]);
			i--;
		}
	}

	cout<< cont<<endl;

	return 0;
}
