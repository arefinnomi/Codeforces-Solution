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


int day[50] ;


int main()
{
    int n;
    cin>>n;


    int x, y;
    bool h[50] = {1}, v[50] = {1};

    for(int i = 0; i < n; i++) h[i] = 1, v[i] = 1;

    for(int i = 0; i < n * n; i++)
    {
        cin>>x>>y;

        if( h[x-1] && v[y-1] )
        {
        	cout<<i+1<<" ";

            h[x-1] = 0;
            v[y-1] = 0;
        }
    }



    return 0;
}
