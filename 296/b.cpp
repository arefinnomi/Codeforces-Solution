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
    int len;
    cin >> len;
    string str1, str2;

    cin >> str1 >> str2;

    int n = 0;

    int x=-1, y=-1;

    for(int i = 0; i < len && n < 1; i++)
    {
        int it;
        while( str1[i] != str2[i])
        {

            for( it = 0; it < len ; it++)
            {
                if(str1[it] == str2[i] && str1[it] != str2[it] && it != i)
                {
                    break;
                }
            }

            if(it == len ) break;
            if(str1[it] != str2[it] )
            {
                swap(str1[i], str1[it]);
                x = i+1;
                y = it+1;
                n++;
                break;
            }
        }
    }
    int cont = 0;
    for( int i = 0; i < len; i++) if( str1[i] != str2[i]) cont++;

    cout<< cont<<endl<<x << ' ' <<y<<endl;


    return 0;
}
