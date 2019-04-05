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


	int ary[n];



	for(int i = 0; i < n; i++)
	{
		scanf("%d", &ary[i] );

		if(i && i % 2) ary[i] = (ary[i]+ary[0]) % n;
		else if(i) ary[i] = (ary[i] + n - ary[0]) % n;
	}

	ary[0] = 0;

	for(int i = 0; i < n; i++) if( ary[i] != i)
		{
			cout<<"No"<<endl;
			return 0;
		}
	cout<<"Yes"<<endl;
//	main();
	return 0;
}
