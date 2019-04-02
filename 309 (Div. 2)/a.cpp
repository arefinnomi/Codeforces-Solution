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

	cin>>str;

	int alp[26] = {0};

	for(int i = 0; i < str.size(); i++) alp[str[i]-'a']++;


	int cont = 0;


	for(int i = 0; i < 26; i++)		cont += str.size()+1 - alp[i];


	cout<<cont<<endl;

//	main();
    return 0;
}
