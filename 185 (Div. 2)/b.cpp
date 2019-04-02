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

    int a, b, c, d;


    cin>>a>>b>>c>>d;


    double re = 0;

    double p = (double) a / b;
    double q = (double) c / d;

    double pq = (double) ( 1 - p ) * ( 1 - q);


    for(int i = 0; i < 1000000; i++)
    {
        re += pow(pq, i);
    }

    re *= p;

    printf("%.11lf\n", re);

//	main();
    return 0;
}
