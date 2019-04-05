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

	int ary[n][2];
	char flag[n];


	int a = 0, g = 0;

	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &ary[i][0], &ary[i][1]);

		if( ary[i][0] < ary[i][1])
		{
			if( abs( a + ary[i][0] - g) <= 500 ) flag[i] = 'A', a += ary[i][0];
			else flag[i] = 'G', g += ary[i][1];
		}
		else
		{
			if( abs( a - ary[i][1] - g) <= 500 ) flag[i] = 'G', g += ary[i][1];
			else flag[i] = 'A', a += ary[i][0];
		}

	}


	for(int i = 0; i < n; i++) printf("%c", flag[i]) ;

	nwl;


//	main();
	return 0;
}
