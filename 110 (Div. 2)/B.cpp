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

#define nwl puts("")
#define pi 2*acos(0.0)


using namespace std;


int main()
{

	int n;
	cin>>n;

	int a[n];

	for(int i = 0; i < n; i++) scanf("%d", a + i);

	sort(a, a+n);

	double re = n & 1 ? (double) a[0] * a[0] : 0;

//	cout<<re<<endl;

	for(int i = n - 1 ; i > 0; i -= 2) re += a[i] * a[i] - a[i-1] * a[i-1];

//	cout<<re<<endl;

	re *= pi;

	printf("%.20lf", re);
	nwl;

//	main();
    return 0;
}
