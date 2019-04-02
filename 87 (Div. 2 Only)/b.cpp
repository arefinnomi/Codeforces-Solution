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

    char str[n][m+5];

    for(int i = 0; i < n; i++) cin>>str[i];



    int cont = 0;


    for(int i = 0;  i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if( str[i][j] == 'W')
            {
                bool flag = 0;

                if( j != 0 ) if( str[i][j-1] == 'P') flag = 1;
                if( j != m-1 ) if( str[i][j+1] == 'P') flag = 1;

                if( i != 0 ) if( str[i-1][j] == 'P') flag = 1;
                if( i != n-1 ) if( str[i+1][j] == 'P') flag = 1;

                if(flag) cont++;
            }
        }
    }


    cout<<cont<<endl;
//    main();
    return 0;
}
