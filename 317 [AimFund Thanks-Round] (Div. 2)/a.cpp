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
	int a, b;

	int k,m;

	cin>>a>>b>>k>>m;


	int ary1[a], ary2[b];
	for(int i = 0; i < a; i++) scanf("%d", ary1 + i);
	for(int i = 0; i < b; i++) scanf("%d", ary2 + i);


	if( ary1[k-1] < ary2[b-m]) cout<<"YES\n";
	else cout<<"NO\n";

	return 0;
}
