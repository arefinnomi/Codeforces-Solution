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
		int arc[26] = {0};
		char ch;

		while(1)
		{
			scanf("%c", &ch);
			if(ch==10) break;
			arc[ch-'a']++;
		}


		bool win = 0;

		int cont = 0;

		for(int i = 0; i < 26; i++)
		{
			if(arc[i] & 1 && cont < 3) cont++;

			if(cont == 3 && arc[i] & 1) win = !win;
		}


		if(cont == 0) cout<<"First\n";
		else if(cont== 1) cout<<"First\n";
		else if(cont==2) cout<<"Second\n";
		else if(win)  cout<<"First\n";
		else cout<<"Second\n";
	}

	return 0;
}
