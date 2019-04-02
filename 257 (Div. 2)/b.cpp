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

long long mod( long long num, long long m)
{

    while( num < 0)
    {
        num += m;
    }

    return num % m;
}

int main()
{
	long long ary[7];
	cin>>ary[1]>>ary[2];

	for(int i = 3; i < 7; i++) ary[i] = ary[i-1] - ary[i-2];

	int quary;

	cin >>quary;

	quary %= 6;

	if( quary == 0) quary = 6;

	cout<<mod(ary[quary], 1000000007)<<endl;
    return 0;
}
