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
	long  long a , b;

	long long cont = 0;

	cin >> a>>b;

//	cout << a <<" "<<b << " " << cont<< endl;

	while( true )
	{
		if(a == b || a==0 || b==0  )break;
		if( a < b ) swap(a,b);

		cont += a / b;
		a = a % b;

//		cout << a <<" "<<b << " " << cont<< endl;
	}
	cout<<cont;


	return 0;
}
