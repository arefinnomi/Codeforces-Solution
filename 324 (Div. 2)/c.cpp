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

typedef unsigned int UI;
typedef long long int LLI;
typedef unsigned long long int ULLI;
typedef long double LLF;
typedef double LF;


using namespace std;


int main()
{
    int n, t;

    cin>>n>>t;
    string str1, str2, str3;
    cin >>str1>>str2;
    str3 = "";

    int cont1 = 0;
    int cont2 = 0;





    for(int i = 0; i < n; i++)
    {
        if(str1[i] == str2[i] && cont1 < n - t && cont2 < n - t )
        {
            str3 += str1[i];
            cont1++;
            cont2++;
        }

        else
        {
            str3 += ' ';

        }

    }


    for(int i = 0; i < n; i++)
    {
        if( str3[i] == ' ')
        {
            if( cont1 < n - t)
            {
                str3[i] = str1[i];
                cont1++;
            }
            else if( cont2 < n - t)
            {
                str3[i] = str2[i];
                cont2++;
            }
            else
            {
                for( char ch = 'a'; ch <= 'z'; ch++)
                {
                    if(str1[i] != ch && str2[i] != ch)
                    {
                        str3[i] = ch;
                        break;
                    }
                }
            }
        }
    }

    cont1 = 0;
    cont2 = 0;

    for(int i = 0; i < n; i++)
    {
        if( str3[i] != str1[i]) cont1++;
        if( str3[i] != str2[i]) cont2++;
    }

    if( cont1 == cont2 && cont2  == t) cout<<str3<<endl;
    else cout<<-1<<endl;


    return 0;
}
