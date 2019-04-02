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
    char str[200000];
    gets(str);

    int len = strlen(str);

    int time;
    scanf("%d", &time);
    vector <int > index;
    int temp;

    int mid = len / 2;

    //cout << mid<<endl;

    while(time--)
    {
        scanf("%d", &temp);
        temp--;
        index.push_back(temp);
    }

    sort(index.begin(), index.end());


    if( index.size() % 2)
    {
        for( int i = index[0]; i < mid; i++) swap(str[i], str[len-1 - i]);

        index.erase(index.begin());
    }

    while( index.size())
    {
        for( int j = index[0]; j < index[1]; j++) swap(str[j], str[len-1 - j]);
        index.erase(index.begin());
        index.erase(index.begin());
    }


    puts(str);

    return 0;
}
