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

using namespace std;

long long power(int i)
{

}

int main()
{

	char str[50];

	gets(str);

	int len = strlen(str);


		if( str[0] !=  '9' && str[0]-'0' > 4 )  str[0] =  '9' - str[0] + '0';



	for( int i = 1; i < len ; i++)
	{
		if(str[i]-'0' > 4 ) str[i] =  '9' - str[i] + '0';
	}

	puts(str);

	return 0;
}
