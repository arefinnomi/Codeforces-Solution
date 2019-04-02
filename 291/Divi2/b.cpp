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

using namespace std;

pair <int, int> c;

bool online( pair <int, int> p1, pair<int, int> p)
{
    long long re = (long long ) (p.first - p1.first) * (p1.second - c.second) - (long long ) (p1.first - c.first) * (p.second - p1.second);

        if( re ) return false;
        else return true;
}




int main()
{
    vector <pair<int,int> > slop;

    int n;

    scanf("%d %d %d", &n, &c.first, &c.second);

    pair<int , int> x;


    while(n--)
    {
        scanf("%d %d", &x.first, &x.second);

        int len = slop.size();

        bool flag = false;

        for( int i = 0; i < len; i++)
        {
            flag = online( slop[i], x);

            if( flag ) break;
        }

//        cout<<flag<<endl;
        if( flag == false)

            slop.push_back(x);
    }


    printf("%d", slop.size());
    return 0;
}
