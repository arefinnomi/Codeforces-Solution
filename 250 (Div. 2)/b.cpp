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
    int sum, limit;
    cin>>sum>>limit;
    int temp;

    stack <int> archive[17];

    for(int i = 1; i <= limit; i++)
    {
        archive[__builtin_ctz(i)].push(i);
    }


    vector < int > store;

    for(int i = 16; i >= 0; i--)
    {
        while( ( sum - (1<<i) > -1 ) && archive[i].size() )
        {
            temp = archive[i].top();
            archive[i].pop();
            store.push_back(temp);
            sum -= (1<<i);
        }
    }

    if( sum) cout<<-1<<endl;
    else
    {
        cout<<store.size()<<endl;
        for(int i = 0; i < store.size(); i++) cout<<store[i]<<" ";
    }



    return 0;
}
