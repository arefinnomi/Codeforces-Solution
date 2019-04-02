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
	char ch = 0;
	int seven = 0, four = 0;

	while(ch != '\n')
	{
		scanf("%c", &ch);

		if(ch == '7') seven++;
		else if( ch == '4') four++;
	}


	if( seven > four) cout<<7;
	else if( four > seven) cout<<4;
	else if( four == 0 && seven == 0 ) cout<<-1;
	else cout<<4;

	nwl;


//	main();
    return 0;
}
