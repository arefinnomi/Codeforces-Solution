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

int i;

#define X first
#define Y second


struct my
{
	bool operator () ( const pair < int , int > &p1,  const pair < int , int > &p2)
	{
		if( p1.Y > p2.Y ) return 1;
		else if( p1.Y == p2.Y) if( p1.X > p2.X ) return 1;

		return 0;
	}
};


int main()
{
	int n;

	cin>>n;


	vector < pair <int ,  int > > str;

	int temp1, temp2;
	for(int i = 0; i < n; i++)
	{
		cin>>temp1>>temp2;
		str.push_back(make_pair(temp1, temp2));
	}

	sort( str.begin(), str.end(), my() );

	int point = 0, time = 1;




	for(int i = 0; i < n && time; i++, time--)
	{
		point += str[i].first;
		time += str[i].second;
	}



	cout<<point<<endl;

//	main();
	return 0;
}
