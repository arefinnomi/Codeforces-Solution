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

    int m;

    cin>>m;
    int ary[m];

    for(int i = 0; i < m; i++) scanf("%d", ary + i);

    int maxima = 0;
    int cont;
    bool flag_left = 1, flag_right = 1;
    for(int i = 0; i < m; i++)
    {
        cont = 1;
        flag_left = 1;
        flag_right = 1;

        for(int j = i-1, k = i+1; flag_left || flag_right; j--, k++)
        {

            if( j > -1 && flag_left)
            {
                if ( ary[j] <= ary[j + 1] ) cont++;
                else flag_left = 0;
            }
            else flag_left = 0;

            if( k < m && flag_right )
            {
                if ( ary[k] <= ary[k-1] ) cont++;
                else flag_right = 0;
            }
            else flag_right = 0;
        }
        maxima = max(maxima, cont);
    }

    cout<<maxima<<endl;


//	main();
    return 0;
}
