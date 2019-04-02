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

	int a[2*m];

    for(int i = 0; i < 2 * m; i++ )
    {
        scanf("%d", a + i);
    }

	sort( a, a + 2*m );

	int pure = 1;

	for( int i = 0; i < 2 * m; i++) if( pure == a[i]) pure++;

	cout<< n - 1 <<endl;

    for(int i = 1; i <= n; i++)
    {
    	if(pure != i)cout<<pure<<" "<<i<<endl;
    }

//    main();
    return 0;
}
