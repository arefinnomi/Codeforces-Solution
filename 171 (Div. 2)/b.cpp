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
    int n, t;
    cin>>n>>t;

    int ary[n];

    int maxim = 0, sum = 0, k = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
        sum += ary[i];
        if(sum <= t) maxim = max(maxim, i - k + 1);

        while( sum > t )		sum -= ary[k++];
//        cout<<maxim<<" "<<sum<<endl;

    }
	cout<<maxim<<"\n";
//    main();
    return 0;
}
