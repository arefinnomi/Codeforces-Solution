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
    int p, q, l, r;

	cin >> p >> q >> l >>r;

    vector< pair<int, int> > ab;
    vector< pair<int, int> > cd;

    int t1,t2;

    for(int i = 0; i < p; i++)
    {
        scanf("%d %d", &t1, &t2);
        ab.push_back(make_pair(t1,t2));
    }

    for(int i = 0; i < q; i++)
    {
        scanf("%d %d", &t1, &t2);
        cd.push_back(make_pair(t1,t2));
    }

    int cont = 0;

    for(int i = l; i <= r; i++)
    {
        bool flag = true;
        for(int j = 0; j < cd.size() && flag; j++)
        {
            for(int k = 0; k < ab.size() && flag; k++)
            {
                if(cd[j].second+i <= ab[k].second && cd[j].second+i >= ab[k].first || cd[j].first+i >= ab[k].first && cd[j].first+i <= ab[k].second || cd[j].first+i <= ab[k].first && cd[j].second+i >= ab[k].second) cont++, flag = false;
//                cout<<i<<" "<<j<<" "<<k<<" "<<cont<<endl;
            }
        }
    }

    cout<<cont<<endl;


//    main();
    return 0;
}
