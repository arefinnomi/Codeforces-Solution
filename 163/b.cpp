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
    int n, t;


    scanf("%d %d", &n, &t);

    getchar();

    char str[n+1];


    gets(str);


    while( t--)
    {
        for(int i = 0; i < n; i++)
        {
            if( str[i] == 'B' && str[i+1] == 'G')
            {
                swap(str[i], str[i+1]);
                i++;
            }
        }
    }



    puts(str);


    return 0;
}
