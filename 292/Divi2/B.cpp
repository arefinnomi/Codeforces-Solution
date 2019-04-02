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
    int n, m;


    scanf("%d %d", &n, &m);

    bool boy[n], girl[m];

    for( int i = 0; i < n; i++) boy[i] = false;
    for( int i = 0; i < m; i++) girl[i] = false;


    int h, i;

    scanf("%d", &h);

    while(h--)
    {
        scanf("%d", &i);

        boy[i] = true;
    }
    scanf("%d", &h);

    while(h--)
    {
        scanf("%d", &i);

        girl[i] = true;
    }

    int limit = m * n;

    for( i = 0 ; i < limit * 2; i++)
    {
        if(boy[i%n] || girl[i%m])
        {
            boy[i%n] = true;
            girl[i%m] = true;
        }

        printf("%d %d\t%d %d\n", i%n, boy[i%n], i%m, girl[i%m]);
    }


    bool flag = true;

    for( i = 0 ; i < n && flag; i++)
    {
        printf("%d %d\n", i, boy[i]);
        flag = boy[i];
    }

    for( i = 0 ; i < m && flag; i++)
    {

        printf("%d %d\n", i, girl[i]);
        flag = girl[i];
    }


    if(flag) puts("Yes");
    else puts("No");


    return 0;
}
