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

using namespace std;


int main()
{
    //while(true)
    {
        int n, m;


        scanf("%d %d", &n, &m);

        int i = m, work[m+1];

        work[0] = 1;

        while(i--) scanf("%d", &work[m - i]);

        long long int time = 0;

        for( i = 0; i < m; i++)
        {
            if( work[i] > work[i+1] ) time += (long long )work[i+1] + n -  work[i];
            else  time += (long long )work[i+1] -  work[i];

            //cout<<time<<"  "<<work[i+1]<<endl;
        }

        cout<<time<<endl;
    }

    return 0;
}
