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
    LLI n;
    cin>>n;
    LLI x ;

    LLI limit = sqrt(n);

    LLI temp , sum = 0;
    for( x = max( (LLI)(-90 + sqrt(90*90+4*n) ) / 2, (LLI) 1) ; x <= limit; x++)
    {
        sum=0;
        temp = x;
        while(temp)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if( sum * x + x * x == n) { cout<<x<<endl; return 0;
        }}
        cout<<-1<<endl;

        return 0;
    }
