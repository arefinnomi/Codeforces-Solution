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
	int n, m, s, f;

	cin>>n>> m>>s>>f;

	vector < pair <int , pair < int, int > > > t;

	int temp1, temp2, temp3;

	for(int i = 0; i < m ; i++)
	{
		cin>>temp1>>temp2>>temp3;

		t.push_back(make_pair(temp1, make_pair(temp2, temp3)));

	}

	string str = "";
	int now = s;

	if(  s < f)
	{

		for(int i = 1, j = 0; now < f; i++)
		{
			if( j < t.size())
			{
				if( t[j].first == i)
				{
					if(now >= t[j].second.first && now <= t[j].second.second)
					{
						str += "X";

					}
					else if(now+1 == t[j].second.first)
					{
						str += "X";

					}
					else
					{
						str += "R";
						now++;
					}
				}
				else
				{
					str += "R";
					now++;
				}

				if( i == t[j].first) j++;

			}
			else
			{
				str += "R";
				now++;
			}
		}
	}
	else
	{

		for(int i = 1, j = 0; now > f; i++)
		{
			if( j < t.size())
			{
				if( t[j].first == i)
				{
					if(now >= t[j].second.first && now <= t[j].second.second)
					{
						str += "X";

					}
					else if(now-1 == t[j].second.second)
					{
						str += "X";

					}
					else
					{
						str += "L";
						now--;
					}
				}
				else
				{
					str += "L";
					now--;
				}

				if( i == t[j].first) j++;

			}
			else
			{
				str += "L";
				now--;
			}
		}
	}

	cout<<str<<endl;

	return 0;
}
