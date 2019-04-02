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

int n, l, r, x;

vector <int > sto;

int cont  = 0;

vector<int> re;

void fun(int fa, int idx)
{
//    if(idx==n) return;


//    cout<<"fa = "<<fa<<" idx = "<<idx<<"\n";
    int sum = 0;


    for(int i = 0; i < re.size(); i++)
    {
//    	cout<<re[i]<<" ";
        sum += re[i];
    }

//	nwl;
//	cout<<"cont "<<cont;
//	nwl;

    if( sum <= r && sum >= l && re[re.size()-1] - re[0] >= x  )
    {
        cont++;
    }

    for(int i = idx; i < n; i++)
    {
        re. push_back( sto[i] );
        fun( idx, i + 1);
        re.pop_back();
    }

    return;
}


int main()
{

    cin>>n>>l>>r>>x;

    int temp;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        sto.push_back(temp);
    }
    sort(sto.begin(), sto.end());

    fun(0,0);

    cout<<cont<<endl;




//    main();
    return 0;
}
