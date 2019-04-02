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
    string num = "";

    cin>>num;

    string re = "";

    bool big = 0;

    int four = num.size() / 2;
    int seven = num.size() / 2;
    LLI temp_num = 0;
    for(int i = 0; i < num.size(); i++)  temp_num = temp_num * 10 + (num[i] - '0');



    for(int i = 0; i < num.size(); i++)
    {
        if( (num[i] - '0' <= 4 || big) && four)
        {
            re += '4';
            four--;
        }
        else if ( seven )
        {
            re += '7';
            seven--;
        }

        if( num[i] != re[i]) big = 1;
    }

	LLI temp_re = 0;
    for(int i = 0; i < re.size(); i++)  temp_re = temp_re * 10 + (re[i] - '0');

    if( temp_num > temp_re)
	{
        re = "";

        for(int i = 0; i <= num.size() / 2; i++) re += '4';
        for(int i = 0; i <= num.size() / 2; i++) re += '7';
	}

    cout<<re<<endl;


    return 0;
}
