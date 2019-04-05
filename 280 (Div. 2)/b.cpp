#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, l;
	scanf("%d %d", &n, &l);

	int ary[n+2];

	int temp = n;

	while(temp)
	{
		scanf("%d", &ary[n-temp]);
		temp--;
	}
	//cout<<"dddddddd";
	sort(ary, ary+n);

	temp = 0;

//	while(temp < n + 2)
//	{
//		printf("%d ", ary[temp]);
//		temp++;
//	}

	int maxima = 0;

	for(int i = 0; i < n-1; i++)
	{
		temp = ary[i+1] - ary[i];
//		cout<<temp<<endl;
		if( maxima < temp) maxima = temp;
	}
//	cout<<maxima<<endl;

	if(ary[0] != 0)
	{
		if( 2*(ary[0] - 0) > maxima) maxima = 2*(ary[0] - 0);
	}
//	cout<<maxima<<endl;
	if(ary[n-1] != l)
	{
		if( 2*(l-ary[n-1]) > maxima) maxima = 2*(l-ary[n-1]);
	}
//	cout<<maxima<<endl;

	printf("%.10lf",(double) maxima / 2.0);
}
