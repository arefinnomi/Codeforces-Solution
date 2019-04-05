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

char ch[1000000];

int main()
{
	bool flag = false;

	gets(ch);

	int len = strlen(ch);

	for( int i = 0; i < len - 1 && flag == 0; i++)
	{
		if( ch[i]== 'A' && ch[i+1] == 'B')
		{
			for( int j = i + 2; j < len - 1&& flag == 0; j++) if( ch[j] == 'B' && ch[j+1] == 'A') flag = 1;
		}
		else if(ch[i]== 'B' && ch[i+1] == 'A')
		{
			for( int j = i + 2; j < len - 1&& flag == 0; j++) if( ch[j] == 'A' && ch[j+1] == 'B') flag = 1;
		}
	}

	if( flag )cout<<"YES";
	else  cout<<"NO";
	nwl;

//	main();
	return 0;
}
