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
    LLI p, d;

    cin >>p>>d;

    LLI mini = p - d;

    LLI temp = p;

    vector <int> ary;

    while( temp)
    {
        ary.push_back(temp%10);
        temp /= 10;
    }


    for(int i = 0; i < ary.size() - 1; i++)
    {
    	if( ary[i] == 9) continue;
        int temp_i = ary[i];
        ary[i] = 9;
        ary[i+1]--;

        temp = 0;

        for(int j = ary.size()-1; j > -1; j--)	temp = temp * 10 + ary[j];

        if( temp < mini)
        {
            ary[i] = temp_i;
            ary[i+1]++;
            break;
        }
    }
    temp = 0;

    for(int j  = ary.size()-1; j > -1; j--)	temp = temp * 10 + ary[j];

	cout<<temp<<endl;



    return 0;
}
