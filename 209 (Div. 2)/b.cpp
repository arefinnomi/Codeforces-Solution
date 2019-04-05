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

	int cont = 0;

	for(int i = 1; i <= 2*n; i += 2)
	{
		if(cont < k)
		{
			cout<<i+1<<" "<<i<<" ";

			cont++;
		}
		else cout<<i<<" "<<i+1<<" ";
	}

//	main();
	return 0;
}
