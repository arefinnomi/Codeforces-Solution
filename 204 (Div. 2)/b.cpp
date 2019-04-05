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
	int n, temp;

	cin>>n;


	vector <int> ary[100000+5];

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &temp);

		ary[temp].push_back(i);

	}
	int cont = 0;
	int ans[100000+5];




	for(int i = 0; i < 100000+5; i++)
	{
		ans[i] = -1;
		if( ary[i].size())
		{
			if( ary[i].size() == 1)
			{
				cont++;
				ans[i] = 0;
			}
			else
			{
				bool flag = 1;
				for(int j = 2; j < ary[i].size() && flag; j++) if( ary[i][j - 1] - ary[i][j - 2] != ary[i][j] - ary[i][j-1] ) flag = 0;

				if(flag)
				{
					ans[i] = ary[i][1] - ary[i][0];
					cont++;
				}
			}
		}
	}

	cout<<cont<<endl;

	for(int i = 0; i < 100000+5; i++) if( ans[i] != -1) cout<<i<<" "<<ans[i]<<endl;
//	main();
	return 0;
}
