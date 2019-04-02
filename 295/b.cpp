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
    //while(1)
    {
        int n, m, ans = 0;
        scanf("%d %d", &n, &m);

        while( n != m)
        {
            if( m % 2 )
            {
                m++;

            }


            else if( n < m)
            {
                m /= 2;

            }
            else m++;


            ans++;
        }

        cout << ans<<endl;
    }

    return 0;
}
