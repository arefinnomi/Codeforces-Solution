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
	int a,b,c,d;
	cin>>a>>b;
	getchar();
	char str1[a][b+1];
	for(int i = 0; i < a; i++) gets(str1[i]);

	cin>>c>>d;
	getchar();

	char str2[c][d+1];
	for(int i = 0; i < c; i++) gets(str2[i]);


	int x , y, maxi = 0, temp;

	for(int i = -a; i < c; i++)
	for(int j = -b; j < d; j++)
	{
			temp = 0;
			for( int p = max(0, 0-i) ; p < a && p + i < c; p++)
			for( int q = max(0, 0-j) ; q < b && q + j < d; q++)
			{
				temp += (str1[p][q]-'0')*(str2[p+i][q+j]-'0');
			}
			if( maxi <= temp )
			{
				maxi = temp, x = i, y = j;
	}}
	cout<<x<<" "<<y<<endl;

	return 0;
}
