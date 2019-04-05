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

	pair <int , int > varda;

	int step;

	scanf("%d %d %d", &varda.first, &varda.second, &step);


	int mini = abs(varda.first)+ abs(varda.second);


	if( mini > step) puts("No");
	else
	{
		if(mini % 2 == step % 2 )
		puts("Yes");

		else puts("No");
	}
	return 0;
}
