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

    int n, m;

    cin>>n>>m;

    vector < int > store[n+1];

    int temp1, temp2;

    for(int i = 0; i < m; i++)
    {
        scanf("%d %d", &temp1, &temp2);

        store[temp1].push_back(temp2);
        store[temp2].push_back(temp1);
    }

	int cont = 0;
	bool flag = 1;

	bool used[n+1];

	while(flag)
	{
        flag = 0;

        for(int i = 0; i < n+1; i++) used[i] = 1;

        for(int i = 1; i < n+1; i++)
		{
			if(store[i].size() == 1 && used[i] )
			{
				flag = 1;
				used[i] = 0;
				used[store[i][0]] = 0;

                store[store[i][0]].erase( find( store[store[i][0]].begin(), store[store[i][0]].end(), i));

                store[i].erase(store[i].begin());
			}
		}

		if(flag) cont++;
	}


	cout<<cont<<endl;


    return 0;
}
