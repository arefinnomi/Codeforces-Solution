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

using namespace std;


int main()
{
	int num;
	scanf("%d", &num);

	if( num % 2 == 0 && num != 2 ) puts("YES");
	else puts("NO");
	return 0;
}
