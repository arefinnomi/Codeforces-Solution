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

	cout<<n<<" ";

	while(n != 1)
	{

		for(int i = n / 2 ; i; i--) if( n % i == 0) { cout<<i<<" "; n = i; break;}
	}
//	main();
	return 0;
}
