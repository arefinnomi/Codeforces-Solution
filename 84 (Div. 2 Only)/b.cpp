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
	int n;

	cin>>n;

	for(int i = 0; i < n; i++)
	{
		if( i % 4 == 0) printf("a");
		else if( i % 4 == 1) printf("b");
		else if( i % 4 == 2) printf("c");
		else printf("d");
	}

	nwl;
//	main();
	return 0;
}
