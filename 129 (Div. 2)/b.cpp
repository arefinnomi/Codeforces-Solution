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
	LLI n;
	LLI maxi , a, cont = 0;

	cin>>n >> a;

	maxi = a;

	for(int i = 1 ; i < n; i++)
	{
		cin >> a;

		if( maxi > a) cont += maxi - a;
		maxi = a;
	}

	cout<< cont<<endl;


    return 0;
}
