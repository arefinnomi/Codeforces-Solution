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
    int sheets[26] = {0};

    char temp;

    while(1)
    {
        scanf("%c", &temp);

        if(temp == '\n') break;

        sheets[temp-'a']++;
    }

    int gadland[26] = {0};
    while(1)
    {
        scanf("%c", &temp);

        if(temp == '\n') break;

        gadland[temp-'a']++;
    }


    int cont = 0;


    for(int i = 0; i < 26; i++)
    {
        if( gadland[i] && sheets[i] == 0)
        {
            cont = 0;
            break;
        }
        cont += min(sheets[i], gadland[i]);
    }

    if(cont) cout<<cont<<endl;
    else cout<<-1<<endl;
//	main();
    return 0;
}
