#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <functional>
#include <numeric>
#include <utility>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cassert>
#include <climits>

using namespace std;

int main()
{
	int a, b, n;

	cin>>a>>b>>n;

	string str = to_string(a);

	int re = a;
	int temp;
	for(int i = 0; i < n; i++) {
		int j = 0;
		for(j = 0; j < 10; j++) {
			temp = re*10 + j;

			if(temp % b==0) {
//				cout<<temp<<" "<<re<<" "<<j<<endl;
				re = temp%b;
				str += j+'0';
				break;
			}
		}
		if(j == 10) {
			cout<<-1<<endl;
			return 0;
		}

	}
	cout<<str<<endl;
	return 0;
}
