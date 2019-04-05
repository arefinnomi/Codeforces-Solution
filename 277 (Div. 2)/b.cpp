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
	//		freopen("in.txt", "read", stdin);
//			freopen("out.txt", "write", stdout);
	int m, n;
	cin>>m>>n;

	bool b[m][n];
	bool in = true;
	for(int i = 0; i < m; i++) for(int j = 0; j < n; j++) scanf("%d", &b[i][j]);


	bool a[m][n];
	for(int i = 0; i < m; i++) for(int j = 0; j < n; j++) a[i][j] = 1;




	for(int i = 0; i < m; i++) for(int j = 0; j < n; j++) if(b[i][j] == 0 )
			{
				for(int x = 0; x < n; x++) a[i][x] = 0;
				for(int x = 0; x < m; x++) a[x][j] = 0;
			}

	bool flag = true,temp;


	for(int i = 0; i < m; i++) for(int j = 0; j < n; j++)
	{
		temp = 0;
		for(int x = 0; x < m, x < n; x++)
		{
			if(x<n) temp = temp || a[i][x];
			if(temp) break;

			if(x<m) temp = temp || a[x][j];
			if(temp) break;
		}
		if(b[i][j] != temp)
		flag = false;

		if(!flag) break;
	}



	if(flag )
	{
		cout<<"YES"<<endl;
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++) printf("%d ", a[i][j]);
			printf("\n");
		}
	}
	else cout<<"NO"<<endl;

	return 0;
}
