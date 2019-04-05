#include <cstdio>
#include <iostream>

using namespace std;


long long com(int n, int r)
{
	if(n < r ) return 0;
	int k = n - r;

	if(k < r) swap(k,r);
	long long int re = 1;

	long long nomi = 1, denomi = 1;

	for(int i = k+1, j = 2; i <= n || j <= r; i++, j++)
	{
		if( i <= n)  nomi *=(long long) i;
		if( j <= r ) denomi *= (long long ) j;

		if(nomi % denomi == 0)
		{
			re *= nomi / denomi;

			nomi = 1;
			denomi = 1;
		}
		if( re % denomi == 0)
		{
			re /= denomi;
			denomi = 1;

			re *= nomi;
			nomi = 1;
		}

		if( re*nomi % denomi == 0)
		{
			re *= nomi;
			re /= denomi;

			nomi = 1;
			denomi = 1;
		}

//		cout<<re<<" "<<nomi<<" "<<denomi<<endl;
	}

	return re;
}


int main()
{
	//while(true)
	{
	int n, m;
	cin>>n>>m;

	long long maxima = com(n-m+1, 2);

	long long minima;

	int eql = n / m;

	int remainder = n % m;

	minima = remainder * com(eql+1, 2) + (m-remainder) * com(eql, 2);

	cout<<minima<<" " <<maxima<<endl;
	}
	return 0;
}
