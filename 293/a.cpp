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
#include<cctype>


#define nwl puts("");


using namespace std;

int main()
{
    //while(1)
    {
        char str1[120], str2[120];

        gets(str1);
        gets(str2);

        int len = strlen(str1);

        char temp[120];

        for( int i = len - 1; i >= 0; i--)
        {
            if( str1[i] == 'z')
            {
                str1[i] =  'a';
            }
            else
            {
                str1[i]++;
                break;
            }
        }



        if( strcmp(str2, str1) > 0)
        {
            printf("%s", str1);
        }
        else printf("No such string");

        nwl;
    }

    return 0;
}
