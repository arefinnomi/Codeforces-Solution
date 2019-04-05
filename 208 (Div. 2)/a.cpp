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

typedef unsigned int UI;
typedef long long int LLI;
typedef unsigned long long int ULLI;
typedef long double LLF;
typedef double LF;


using namespace std;


int main()
{
	int n;

	vector < pair <int, int > > point;
	bool flag = 1;
	cin>>n;
	int x1, x2;
	cin>>x1;
	int pre = x1;
	for(int i = 2; i <= n; i++)
	{
		x1 = pre;
		cin>>x2;
		pre = x2;

		if( x1 > x2) swap(x1, x2);

		for(int j = 0; j < point.size() && flag; j++)
		{
			if( x1 > point[j].first && x1< point[j].second && x2 > point[j].second ) flag = 0;
			if(  x1 < point[j].first && x2 < point[j].second && x2 > point[j].first) flag = 0;

		}
		point.push_back(make_pair(x1, x2));
	}
	if(flag) cout<<"no\n";
	else cout<<"yes\n";
	return 0;
}
