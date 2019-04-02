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

int gcd(int a, int b)
{
	if(a < b) swap(a,b);
	if( b == 0) return a;

	return gcd(b, a % b);
}

int main()
{
	int a, b, c, d;


	cin>>a>>b>>c>>d;

	int nomi, denomi;

	if(a*d < b*c) nomi = b*c-a*d, denomi = b*c;
	else nomi = a*d - b*c, denomi = a*d;

	int divi = gcd(nomi, denomi);

	cout<<nomi/divi<<"/"<<denomi/divi<<endl;

    return 0;
}
