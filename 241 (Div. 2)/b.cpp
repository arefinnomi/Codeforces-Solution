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
	int m, n;
	cin>>m>>n;

	int ary[m][n];


	for(int i = 0; i < m; i++) for(int j = 0; j < n; j++) scanf("%d", &ary[i][j]);



    for(int i = 1; i < n; i++) ary[0][i] += ary[0][i-1];


    for(int i = 1; i < m; i++) ary[i][0] += ary[i-1][0];


    for(int i = 1; i < m; i++) for(int j = 1; j < n; j++)    ary[i][j] += max(ary[i][j-1], ary[i-1][j]);


    for(int i = 0; i < m; i++) printf("%d ", ary[i][n-1]);
    return 0;
}
