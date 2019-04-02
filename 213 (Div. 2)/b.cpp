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
    int n;

    cin>>n;


    int a[n];

    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    int maxima = 0;
    int temp;

    if( n == 1) temp = 1;
    else temp = 2;

    maxima = max(temp, maxima);

    for(int i = 2; i < n; i++)
    {
        if( a[i] == a[i-1]+a[i-2]) temp++;
        else temp = 2;
        maxima = max(temp, maxima);
    }


    cout << maxima<<endl;

//	main();
    return 0;
}
