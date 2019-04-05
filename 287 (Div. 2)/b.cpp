#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//while(1)
	{
		long long r, x, y, x1, y1;

		cin>> r >> x >> y >> x1 >> y1;

		double dist = sqrt( (x-x1)*(x-x1) + (y-y1)*(y-y1));


		int cont = ceil(dist / (2*r) );

		cout<<cont <<endl;
	}
}
