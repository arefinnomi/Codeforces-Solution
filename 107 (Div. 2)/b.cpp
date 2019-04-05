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

struct triple
{
	int no;
	string name;
	int girl;
	int pizza;
	int taxi;

	triple()
	{
		no = 0;
		name = "";
		girl = 0;
		pizza = 0;
		taxi = 0;
	}

	triple(int s, string str, int a, int b, int c)
	{
		no = s;
		name = str;
		girl = a;
		pizza = b;
		taxi = c;
	}
};

bool sort_taxi( triple a, triple b)
{
	if( a.taxi > b.taxi ) return 1;
	else if (a.taxi < b.taxi ) return 0;
	else if (a.no < b.no ) return 1;
	else return 0;
}

bool sort_pizza( triple a, triple b)
{
	if( a.pizza > b.pizza ) return 1;
	else if (a.pizza < b.pizza ) return 0;
	else if (a.no < b.no ) return 1;
	else return 0;
}

bool sort_girl( triple a, triple b)
{
	if( a.girl > b.girl ) return 1;
	else if (a.girl < b.girl ) return 0;
	else if (a.no < b.no ) return 1;
	else return 0;
}


int main()
{
	int n;
	cin>>n;

	vector < triple > data;

	int s;
	string str;

	for(int i = 0; i < n; i++)
	{
		data.push_back(triple( i, "", 0, 0, 0));

		cin>>s>>data[i].name;

		for(int j = 0; j < s; j++)
		{
			cin>>str;

			if( str[0] == str[1] && str[1] == str[3]  && str[3] == str[4] && str[4] == str[6] && str[6] == str[7] ) data[i].taxi++;
			else if( str[0] > str[1] && str[1] > str[3]  && str[3] > str[4] && str[4] > str[6] && str[6] > str[7] ) data[i].pizza++;
			else data[i].girl++;
		}
	}

	sort( data.begin(), data.end(), sort_taxi);

	cout<<"If you want to call a taxi, you should call: "<<data[0].name;

	for(int i = 1; data[0].taxi == data[i].taxi && i < n; i++) cout<<", "<<data[i].name;
	cout<<".\n";




	sort( data.begin(), data.end(), sort_pizza);

	cout<<"If you want to order a pizza, you should call: "<<data[0].name;

	for(int i = 1; data[0].pizza == data[i].pizza && i < n; i++) cout<<", "<<data[i].name;
	cout<<".\n";





	sort( data.begin(), data.end(), sort_girl);

	cout<<"If you want to go to a cafe with a wonderful girl, you should call: "<<data[0].name;

	for(int i = 1; data[0].girl == data[i].girl && i < n; i++) cout<<", "<<data[i].name;
	cout<<".\n";







//	main();
	return 0;
}
