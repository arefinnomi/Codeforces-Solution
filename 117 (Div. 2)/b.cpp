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
	int d;
	cin>>d;

	int n;

	cin>>n;

	int cont=0, temp;

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &temp);

		if(i != n-1 )cont +=  d - temp;
	}

	cout<<cont<<endl;

    return 0;
}
