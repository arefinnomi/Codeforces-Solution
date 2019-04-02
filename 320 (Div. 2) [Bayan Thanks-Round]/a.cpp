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

LLI my(LLI n, LLI i)
{
    if( i == 0) return 1;
    return n * my(n, i-1);
}


int main()
{
    LLI i, n;

    cin>>n;

    int cont = 0;


    for( i = 40; i >= 0 && n; i--)
    {
        if( my(2, i ) <= n)
        {
            cont++;
            n -= my(2, i);
        }
    }




    cout<<cont + n<<endl;

    return 0;
}
