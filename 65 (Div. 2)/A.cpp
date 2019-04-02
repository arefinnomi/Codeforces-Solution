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
    int n;
    cin>>n;
    string str;
    for(int i = 0; i < n; i++) {
		cin>>str;
		if(str.size()<=10) cout<<str<<endl;
		else cout<<str[0]<<str.size()-2<<str[str.size()-1]<<endl;
    }
    return 0;
}
