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
	int n, m, d;

	cin>>n>>m>>d;
	int l = n * m;
	int ary[l];

	for(int i = 0; i < l; i++)
	{
		scanf("%d", ary + i);
	}

	sort(ary, ary + l);


	int mid = l / 2;


	int cont = 0;

	for(int i = 0;  i < l && cont != -1 ; i++)
	{
		if( abs( ary[i] - ary[mid] ) % d ) cont = -1;
		else cont += abs( ary[i] - ary[mid] ) / d;
	}


	cout<<cont<<endl;



//	main();
	return 0;
}
