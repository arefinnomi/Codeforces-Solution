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

	int n, m;

	cin>>n>>m;

	if(n  == m&&m == 1 )cout<<n<<endl;

	else if( m - 1 >= n - m) cout<< m - 1<<endl;

	else cout<<m+1<<endl;


    return 0;
}
