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
	scanf("%d", &n);

	int mid = 0, ary[n];
	bool flag = true;
	for(int i = 0; i < n ; i++)
	{
		scanf("%d", &ary[i]);

		if(i==0) mid = i;
		else if( ary[i-1] <= ary[i] && flag ) mid = i;
		else flag = false;
	}
//	cout<< mid<<endl;
	flag = true;
	for(int i = mid + 1; flag && i < n-1; i++)
	{
		if( ary[i] <= ary[i+1] );
		else flag = false;
	}
//	cout<<flag<<endl;

	if(ary[n-1] > ary[0] && mid != n-1) flag = false;

	if(flag) cout<<n-mid-1<<endl;
	else cout<<-1<<endl;

    return 0;
}
