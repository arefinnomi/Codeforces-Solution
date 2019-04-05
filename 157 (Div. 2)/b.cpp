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

int det( int ary[3][3] )
{
	return ary[0][0]*(ary[1][1]*ary[2][2] - ary[1][2] * ary[2][1]) + ary[0][1] *  (ary[1][2]*ary[2][0] - ary[2][2]*ary[1][0]) + ary[0][2] * (ary[1][0]*ary[2][1]-ary[2][0]*ary[1][1]);

}
int main()
{
	int ary[3][3];

	for(int i = 0; i < 3; i++)	for(int j = 0; j < 3; j++) scanf("%d", &ary[i][j]);


	int d[3] = {ary[0][1]+ary[0][2] , ary[1][0]+ary[1][2], ary[2][0]+ary[2][1]};

	int main[3][3] =
	{
		0, 1, 1,
		1, 0, 1,
		1, 1, 0
	};
	{
		int temp[3][3] =
		{
			d[0], 1, 1,
			d[1], 0, 1,
			d[2], 1, 0
		};

		ary[0][0] = det(temp)/det(main);

	}
	{
		int temp[3][3] =
		{
			0, d[0], 1,
			1, d[1], 1,
			1, d[2], 0
		};

		ary[1][1] = det(temp)/det(main);

	}
	{

		int temp[3][3] =
		{
			0, 1, d[0],
			1, 0, d[1],
			1, 1, d[2]
		};

		ary[2][2] = det(temp)/det(main);
	}

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++) printf("%d ", ary[i][j]);
		printf("\n");
	}




	return 0;
}
