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
    int num;
    scanf("%d", &num);
    getchar();

    int temp = num-1;

    vector < char > unused;
    vector < char > :: iterator it;;

    char key, room;
    int cont = 0;

    while(temp--)
    {
        scanf("%c%c", &key, &room);

        if(key == room+32) continue;

        unused.push_back(key);
        it = find(unused.begin(), unused.end(), room+32);

        if( it == unused.end())
        {

        }
        else
        {
            unused.erase(it);
        }
    }


    cout<< unused.size()<<endl;




    return 0;
}
