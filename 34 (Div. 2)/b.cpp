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

	int n, m;

	cin>>n>>m;

	int a[n];

	for(int i = 0; i < n; i++) scanf("%d", a + i);

	sort( a, a+n);


	int cont = 0;

	for(int i = 0; i < m; i++)
	{
		if( a[i] >= 0) break;

		cont += a[i];
	}
	if( cont < 0) cont = -cont;

	cout<<cont<<endl;

//	main();
	return 0;
}
