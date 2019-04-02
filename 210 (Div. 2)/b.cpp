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
	int ary[n+1];

	int cont = 0;

	int i = n - k ;

	if( i < 1 )
	{
		cout<<-1<<endl;
		return 0;
	}
	int j = 1;
	if( i % 2 ) cout<<1<<" ", j = 2;

	for( ; j <= i; j+=2 ) cout<<j+1<<" "<<j<<" ";


	for(int j = i+1; j <= n; j++) cout<<j<<" ";



//	main();
    return 0;
}
