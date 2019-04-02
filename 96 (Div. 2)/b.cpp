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


long long my_pow( int exp)
{
	if( exp == 0) return 1;
	return ( (long long) 2 * my_pow( exp - 1) ) % 1000003 ;
}


int main()
{
    string str;
    cin>>str;

    string re = "";


    for(int i = 0; i < str.size() ; i++)
    {
        switch (str[i])
        {
        case '>' :
            re += "1000";
            break;
        case '<' :
            re += "1001";
            break;
        case '+' :
            re += "1010";
            break;
        case '-' :
            re += "1011";
            break;
        case '.' :
            re += "1100";
            break;
        case ',' :
            re += "1101";
            break;
        case '[' :
            re += "1110";
            break;
        case ']' :
            re += "1111";
            break;
        }
    }

	reverse(re.begin(), re.end());

	long long ans = 0;


	for(int i = 0; i < re.size(); i++)
	{
		if(re[i]-'0') ans = ( ans + my_pow( i) ) % 1000003 ;
	}
	cout<<ans<<endl;


//	main();
    return 0;
}
