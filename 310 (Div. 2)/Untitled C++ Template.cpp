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
	int n, k;

	cin>>n>>k;

	int chain_size[k], temp;

	vector <int> chains[k];

	for(int i = 0; i < k; i++)
	{
		scanf("%d", &chain_size[i]);

		for(int j = 0; j < chain_size[i]; j++)
		{
			scanf("%d", &temp);

			chains[i].push_back(temp);
		}

	}


	bool re[n];

	int cont = 0;
	for(int i = 0; i < k; i++)
	{
		for(int j = 0; j < chain_size[i]; j++)
		{
			while(j+1 < chain_size[i])
			{
				if( chains[i][j] + 1 == chains[i][j+1]) j++;
				else
				{
					break;
				}
			}

			if(j == chain_size[i] - 1 ) cont++;
			else cont += 2;

		}
	}


	cout<<cont-1<<endl;



//	main();
	return 0;
}
