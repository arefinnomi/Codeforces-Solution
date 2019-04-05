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

using namespace std;


int main()
{
	int test;

	scanf("%d ", &test);

	while(test--)
	{
		char str[200];

		gets(str);


		int len = strlen(str);

		if( len <= 10) puts(str);

		else
		{
			printf("%c%d%c\n", str[0], len - 2, str[len-1]);
		}
	}
	return 0;
}
