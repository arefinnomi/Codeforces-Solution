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
	int n, d;
	cin >> n >> d;


	vector < pair < int , int > > s;
	vector < pair < int , int > > b;

	char ch;
	int num1, num2;

	for(int i = 0; i < n; i++)
	{
		cin >> ch >> num1>> num2;

		if( ch == 'S')
		{
			bool flag = 1;

			for(int i = 0; i < s.size() && flag; i++) if( s[i].first == num1 ) s[i].second += num2, flag = 0;

			if(flag) s.push_back(make_pair(num1, num2));
		}
		if( ch == 'B')
		{
			bool flag = 1;

			for(int i = 0; i < b.size() && flag; i++) if( b[i].first == num1 ) b[i].second += num2, flag = 0;

			if(flag) b.push_back(make_pair(num1, num2));
		}
	}

    sort(s.begin(), s.end());
    sort(b.begin(), b.end());

    for(int i = s.size() < d ? s.size()-1 : d-1 ; i >= 0; i--) cout<<"S "<<s[i].first<<" "<<s[i].second<<endl;
    for(int i = b.size() - 1; i >= 0 && b.size() - i <= d; i--) cout<<"B "<<b[i].first<<" "<<b[i].second<<endl;


    return 0;
}
