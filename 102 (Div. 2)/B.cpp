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
    string integer = "", floating = "";

    char ch;
    bool flag = 1;

    while(1)
    {
        scanf("%c", &ch);

        if(ch == '\n') break;
        else if( ch == '.' ) {flag = 0; continue;}

        if(flag) integer += ch;
        else floating += ch;
    }

    string str;
	flag = 0;
    if(integer[0] == '-') flag = 1, integer.erase(integer.begin());


    if(integer.size() == 0) integer[0] = '0';
    if(floating.size() == 0) floating[0] = '0', floating[1] = '0';
    else if ( floating.size() == 1) floating[1] = '0';

    reverse(integer.begin(), integer.end());

    for(int i = 0; i < integer.size(); i++)
    {
        if( i != 0 && i % 3 == 0)
        {
            str += ',';
            str += integer[i];
        }
        else str += integer[i];
    }

    reverse(str.begin(), str.end());


	str = "$" + str + '.' + floating[0] + floating[1];


	if(flag) str = '(' + str + ')';

	cout<<str<<endl;

    return 0;
}
