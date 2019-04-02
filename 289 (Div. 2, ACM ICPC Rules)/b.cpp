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
    int n, k;

    cin>>n>>k;

    int a[n];

    for(int i = 0; i < n; i++) cin>>a[i];

    bool flag = 1;

    for(int i = 0; i < n && flag; i++) for(int j = i + 1; j < n && flag; j++) if(a[i] - a[j] > k) flag = 0;


    if(flag) cout<<"YES\n";
    else
    {
        cout<<"NO\n";
        return 0;
    }

    flag = 1;
    vector < int > res[n];
    int cont = 1, color = 1;

    while(flag)
    {

        for(int i = 0; i < n; i++)
        {
            if( a[i] < cont) flag = 0;
            else
            {
                res[i].push_back(color);

//                cout<<cont<<" "<<color<<endl;
            }
//            cout<<"ok";
        }

        cont++;
    }

    color++;

    while( color<=k)
    {
        for(int i = 0; i < n; i++)
        {
            if( a[i] >= cont) res[i].push_back(color);
        }
        cont++, color++;
    }

    for(int i = 0; i < n; i++, printf("\n")) for(int j = 0; j < res[i].size(); j++) cout<< res[i][j]<<' ';
    return 0;
}
