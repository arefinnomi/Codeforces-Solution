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

	getchar();

	int bit[2] = {0};

	char temp;

	for(int i = 0; i < n; i++)
	{
		scanf("%c", &temp);
		bit[temp-'0']++;
	}


	int sub = bit[0]-bit[1];

	if(sub>0)cout<<sub<<endl;
	else cout<<-sub<<endl;

	return 0;
}
