#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);


	char table[n][m + 1];


	for(int i = 0; i < n; i++)
	{
		for( int j = 0; j < m; j++)
		{
			table[i][j] = '#';

		}
		table[i][m] = '\0';
	}

	char flag = 0;
	for( int  i = 1; i < n; i += 2)
	{
		if( flag )
		{
			flag = 0;
			for( int j = 1; j < m; j++) table[i][j] = '.';
		}
		else
		{
			flag = 1;
			for( int j = 0; j < m-1; j++) table[i][j] = '.';
		}
	}

	for( int i = 0; i < n; i++) puts(table[i]);
	return 0;
}
