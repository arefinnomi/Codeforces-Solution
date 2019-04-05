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
//	while(1)
	{
		string str;
		cin >> str;

		string main = "CODEFORCES";

		bool flag[10] = {0};


		bool ans = false;

		for(int i = 0; i < str.size(); i++)


		if(!ans)
		{

			int ind = 0;
			for(int i = 0; i < str.size(); i++)
			{
				if( str[i] == main[i] ) flag[ind++] = 1;
				else break;
			}

			for(int i = str.size() - 1,  j = 9; i >= 0 && j >= 0 && j >= ind; i--, j--)
			{
				if( str[i] == main[j] ) flag[j] = 1;
				else break;
			}

			for(int i = 0; i < 10; i++)
			{
				if(!flag[i] )
				{
					ans = false;
					break;
				}
				else ans = true;

			}

		}
		if(ans) cout<<"YES";
		else cout<<"NO";

		cout<<endl;
	}

	return 0;
}
