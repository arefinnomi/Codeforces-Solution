#include <iostream>
#include <cstdio>

using namespace std;

struct black
{
	int r, c;

	black(int i = 0, int j = 0)
	{
		r = i;
		c = j;
	}
};

int main()
{
	while(true)
	{
		int m, n, k;
		scanf("%d %d %d", &n, &m, &k);

		char color[n+2][m+2], flag = 0;

		for( int x = 0; x < n + 2; x++)
		{
			for(int y = 0; y < m + 2; y++) color[x][y] = 0;

		}

		int r, c, coun = 0, temp_k = k ;

		while(temp_k--)
		{

			scanf("%d %d", &r, &c);

			color[r][c] = 1;

			if( flag == 0)
			{
				coun++;
			}
			if( color[r][c-1] == 1 && color[r+1][c-1] == 1 && color[r+1][c] == 1 )
			{
				flag = 1;

			}
			if( color[r][c+1] == 1 && color[r+1][c+1] == 1 && color[r+1][c] == 1 )
			{
				flag = 1;

			}
			if( color[r][c+1] == 1 && color[r-1][c+1] == 1 && color[r-1][c] == 1 )
			{
				flag = 1;

			}
			if( color[r][c-1] == 1 && color[r-1][c-1] == 1 && color[r-1][c] == 1 )
			{
				flag = 1;

			}

		}


		for( int x = 0; x < n + 2; x++)
		{
			for(int y = 0; y < m + 2; y++) printf("%d ", color[x][y]);
			printf("\n");
		}


		if( coun == k && flag == 0) coun = 0;

		printf("%d", coun);
	}
	return 0;
}
