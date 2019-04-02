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

	for(int i = 0; i < n; i++) scanf("%d", &ary[i]);


	int re[k];

	for(int i = 0; i < k; i++)
	{
		re[i] = 0;

		for(int j = i; j < n; j += k) re[i] += ary[j];

	}

	int mini = 0;


	for(int i = 0; i < k; i++) if( re[i] < re[mini] ) mini = i;


	cout<<mini+1<<endl;
//	main();
    return 0;
}
