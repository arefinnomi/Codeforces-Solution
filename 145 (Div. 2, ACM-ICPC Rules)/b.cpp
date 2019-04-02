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

struct my
{
    int _1;
    int _2;

    my()
    {
    	_1 = 0;
    	_2 = 0;
    }

	my(int a, int b)
	{
		_1 = a;
		_2 = b;
	}

    bool operator > (const my &B) const
    {
        if( _1 > B._1) return 1;
        else if (_1 < B._1 )return 0;
        else if( _2 > B._2 ) return 1;
        else return 0;
    }
};

void my_sort(my *p, my *q)
{
	int limit = q - p;

    for(int i = 0; i < limit; i++)
	{
		for(int j = i + 1; j < limit; j++)
		{
			if( p[j] > p[i]) swap(p[i], p[j]);
		}
	}
}




int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, k, temp;

	cin>>n>>k;

	my data[n];


	for(int i = 0; i < n; i++)
	{
		cin>>temp;
		data[i] = my( temp, i+1);
	}

	my_sort(data, data+n);

//	for(int i = 0; i < n; i++) cout<<data[i]._1<<" ";

	cout<<data[k-1]._1<<endl;

	int ans[k];
	for(int i = 0; i < k; i++) ans[i] = data[i]._2;

	sort(ans, ans+k);

	for(int i = 0; i < k; i++) cout<<ans[i]<<" ";

    return 0;
}
