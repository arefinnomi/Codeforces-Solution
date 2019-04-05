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

	cin >>n;

	int ary[1000+10];

	for(int i = 0; i < n; i++) cin >>ary[i];

	int cont = min( ary[0], ary[n-1]);

	for(int i = 1; i < n - 2; i++)
	{
		if( cont == ary[i] && ary[i] > ary[i+1] ) cont = ary[i];
		if( cont == ary[i+1] && ary[i+1] > ary[i] ) cont = ary[i+1];
		if( cont > ary[i] && ary[i] == ary[i+1] ) cont = ary[i];
		if( cont > ary[i] && ary[i] > ary[i+1] ) cont = ary[i];
		if( cont > ary[i+1] && ary[i+1] > ary[i] ) cont = ary[i+1];

	}
	cout<<cont<<endl;
	return 0;
}
