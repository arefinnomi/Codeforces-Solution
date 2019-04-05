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
	int n, t;

	cin>>n>>t;

	if( n == 1 && t == 10) cout<<-1;
	else if( t != 10)
	for(int i = 0; i < n; i++) cout<<t;
	else
	{
		for(int i = 0; i < n -1 ;i++) cout<<1;
		cout<<0;
	}
	nwl;



	return 0;
}
