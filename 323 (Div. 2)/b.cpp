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

bool crack[1000];


int main()
{
	int n, temp;

	cin>>n;

	int ary[n];

	for(int i = 0; i < n; i++) cin >>ary[i];

	int info = 0, cont = 0;

	bool flag = 1;

	while(1)
	{

		for(int i = 0; i < n; i++)
		{
			if( ary[i] <= info && !crack[i])
			{
				crack[i] = 1;
				info++;
			}
		}


		flag = 0;
		for(int i = 0; i < n ; i++) if( !crack[i] ) flag = 1;
		if( !flag ) break;
		cont++;

		for(int i = n-1; i > -1; i--)
		{
			if( ary[i] <= info && !crack[i])
			{
				crack[i] = 1;
				info++;
			}
		}

		flag = 0;
		for(int i = 0; i < n ; i++) if( !crack[i] ) flag = 1;
		if( !flag ) break;
		cont++;

	}
	cout<<cont<<endl;




	return 0;
}
