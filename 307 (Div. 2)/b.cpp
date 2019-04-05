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
	int a_f[26] = {0};
	int b_f[26] = {0};
	int c_f[26] = {0};

	string a, b, c;

	a = "";
	b = "";
	c = "";
	char ch = 0;

	while(1)
	{
		scanf("%c", &ch);
		a+= ch;
		a_f[ch - 'a']++;

		if(ch == '\n') break;
	}

	while( 1)
	{
		scanf("%c", &ch);

		if(ch == '\n') break;

		b+= ch;
		b_f[ch - 'a']++;
	}

	while( 1)
	{
		scanf("%c", &ch);

		if(ch == '\n') break;

		c+= ch;
		c_f[ch - 'a']++;

	}

	int min_b = 0;
	int min_c = 0;


	int limit_b = a.size();
	int low_f;

	for(int i = 0; i < 26; i++)
	{
		if(b_f[i])
		{
			if (limit_b > a_f[i] / b_f[i] )
			{
				limit_b = a_f[i] / b_f[i] ;
			}
		}
	}



	for(int i = 0; i <= limit_b; i++)
	{
		int low_c = a.size();

		for(int j = 0; j < 26; j++)
		{
			if(c_f[j]) low_c = min( (a_f[j] - i * b_f[j] ) / c_f[j], low_c);

		}

//		cout<<i<<" "<<low_c<<endl;
		if( i + low_c > min_c + min_b)
		{
			min_b = i;
			min_c = low_c;
		}

	}

	for(int i = 0; i < min_b; i++) cout<<b;
	for(int i = 0; i < min_c; i++) cout<<c;

	for(int i = 0; i < 26; i++)
	{
		a_f[i] = a_f[i] - b_f[i] * min_b - c_f[i] * min_c;

		for(int j = 0; j < a_f[i]; j++) printf("%c", 'a'+i);
	}




//	main();
	return 0;
}
