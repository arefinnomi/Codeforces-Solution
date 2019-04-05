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
	string str;

	cin >> str;

	vector < int > out;

	int temp = 0;

	while(1)
	{
		int i;
		for( i = 0; i < str.size(); i++)
			if(str[i] != '0' ) break;

		if( i == str.size() ) break;

		temp = 0;
		for( int i = 0; i < str.size(); i++)
		{
			if(str[i] != '0' )
			{
				temp = temp * 10  + 1;

				str[i]--;
			}
			else temp = temp * 10  + 0;

		}
		out.push_back(temp);
//			cout<<out.size()<<endl;
	}

	cout<<out.size()<<endl;

	for(int i = 0; i < out.size(); i++) cout<<out[i] <<" ";


	return 0;
}
