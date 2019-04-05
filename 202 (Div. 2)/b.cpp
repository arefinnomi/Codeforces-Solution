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
	int v;
	cin>>v;

	pair <int, char > value[10];
	int wight[10];

	int temp;
	for(int i = 1; i < 10; i++)
	{
		cin>>temp;
		value[i] = make_pair(temp, i + '0' );
		wight[i] = temp;
	}
	sort(value+1, value+10);

	string str = "";



	temp = v / value[1].first;

	for(int i = 0; i < temp ; i++) str += value[1].second;

	temp = temp * value[1].first;

	for(int i = 0 ; i < str.size(); i++)
	{
		for(int j = 9; j; j--)
		{
			if( temp - wight[str[i]-'0'] + wight[j] <= v)
			{

				temp = temp - wight[str[i]-'0'] + wight[j];
				str[i] = j +'0';
				break;
			}
		}
	}

	if(str=="") cout<<-1<<endl;
	else cout<<str<<endl;



//	main();
		return 0;
	}
