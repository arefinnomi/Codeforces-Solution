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
	int n, m;
	cin>>n>>m;
	int a[n];
	int b[m];
	for(int i = 0; i < n; i++) cin>>a[i];
	for(int i = 0; i < m; i++) cin>>b[i];
	int cont = n;

	int j = 0;


	for(int i = 0; i < n && j < m; i++)
	{

		while(a[i] > b[j]) j++;

		if( j >= m) break;

//		cout<<j<<" "<<i<<" "<<cont<<endl;
		if(a[i] == b[j])
		{
			cont--;
			j++;
		}
		else if(a[i] < b[j])
		{
			cont--;
			j++;
		}
	}
	cout<<cont;
	nwl;
//	main();
	return 0;
}
