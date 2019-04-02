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

int  fun( int num1, int num2)
{
    int cont = 0;
    while(num1||num2)
    {
        if((num1&1) != (num2&1) )
        {
            cont++;
//            cout<<(int )(num1&1 )<<" "<<(int) (num2&1 )<<endl;
        }
        num1 = num1>>1;
        num2 = num2>>1;

    }
//    cout<<"---------------------"<<cont<<endl;
    return cont;
}


int main()
{


    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    int ind = 0;

    int ary[1000+5];
    while(ind < m+1)
    {
        scanf("%d", &ary[ind]);
        ind++;
    }

    int cont = 0;

    for(int i = 0 ; i < m; i++)
    {
        if( fun(ary[m], ary[i] ) <= k) cont++;
    }

    printf("%d\n", cont);

    return 0;
}
