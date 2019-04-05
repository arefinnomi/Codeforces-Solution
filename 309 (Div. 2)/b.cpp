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

	string str[n];
	for(int i = 0; i < n; i++) cin>>str[i];


	int cont = 0;
	int maxim = 0;

	for(int i = 0; i < n; i++)
	{
		cont = 1;

		for(int j = i+1; j < n; j++) if( str[i] == str[j]) cont++;

		maxim = max(maxim, cont);
	}


	cout<<maxim<<endl;

//	main();
	return 0;
}
