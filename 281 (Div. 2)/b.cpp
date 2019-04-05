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

string convert(long long num)
{
	string re = "";

	while(num)
	{
		re += (num % 10 ) + '0';
		num /= 10;
	}

	reverse(re.begin(), re.end());

	return re;
}


int main()
{
	int n;
	cin >> n;
	long long first_point=0, second_point = 0, temp;
	vector <int> first , second;
	bool last;

	for(int i = 0; i < n; i++)
	{
		cin>>temp;

		if( temp > 0)
		{
			last = 0;
			first_point += temp;
			first.push_back((int)temp);
		}
		else
		{
			last = 1;
			temp = - temp;
			second_point += temp;
			second.push_back((int)temp);
		}
	}

	if( first_point > second_point) cout<<"first";
	else if(first_point < second_point) cout<<"second";
	else
	{
		int flag = 0;

		for( int i = 0; (i < first.size() || i < second.size() ) && flag == 0; i++)
		{
			if( i < first.size() && i < second.size() ) {if( first[i] > second[i] ) flag = 1; else if( first[i] < second[i] )  flag = 2;}
			else if(i < first.size()) flag = 1;
			else flag = 2;
		}

		if( flag == 1) cout<<"first";
		else if( flag == 2) cout<<"second";
		else
		{
			if(last) cout<<"second";
			else cout<<"first";
		}
	}
	nwl;
//	main();
	return 0;
}
