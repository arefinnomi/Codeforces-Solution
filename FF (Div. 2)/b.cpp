#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
	string str;

	int k;

	int ary[26];

	cin >> str;
	scanf("%d", &k);

	for(int i = 0; i < 26; i++)   scanf("%d", &ary[i]);


	long long int cont = 0;

	for( int i = 0; i < str.size(); i++ ) cont += (i+1) * ary[str[i]-'a'];
//	cout<<cont<<endl;


	sort(ary, ary+26);

	k += str.size();
	cont +=(long long) ary[25] * (k*(k+1)/2 - str.size() *(str.size()+1) / 2);


	cout<<cont<<endl;
}


