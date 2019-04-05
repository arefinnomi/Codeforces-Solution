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
	int n;
	cin>>n;

	int in[n][2];

	int home[100005] = {0}, away[100005] = {0};



	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &in[i][0], &in[i][1]);
		home[in[i][0]]++, away[in[i][1]]++;
	}


	for(int i = 0; i < n; i++)
	{
		printf("%d %d\n", n+home[in[i][1]]-1, n-home[in[i][1]]-1);
	}



	return 0;
}
