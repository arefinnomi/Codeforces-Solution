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
#include<cctype>

#define nwl puts("");


using namespace std;


int main()
{
	//while(1)
	{
		bool flag = true;

		bool ch_flag[26] = {false};

		int n;
		char ch;

		scanf("%d", &n);
		getchar();

		while( n--)
		{
			scanf("%c", &ch);
			if( isalpha(ch))
			{
				if( islower(ch ))  ch -= 'a';
				else if(isupper( ch)) ch -= 'A';
				ch_flag[ch] = true;
			}



		}

		for( int i = 0; i < 26; i++)
		{
			if( ch_flag[i] == false)
			{
				flag = false;
				break;
			}

		}
		if( flag) puts("YES");
		else puts("NO");
	}

	return 0;
}
