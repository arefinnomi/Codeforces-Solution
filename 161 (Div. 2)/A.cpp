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
    int ary[5][5];

    for(int i = 0; i < 5; i++) for(int j = 0; j < 5; j++) cin >> ary[i][j];

    pair < int , int > pos;
    for(int i = 0; i < 5; i++) for(int j = 0; j < 5; j++) if(ary[i][j] == 1) pos = make_pair(i,j);

    cout<< abs(pos.first-2)+abs(pos.second-2)<<endl;

    return 0;
}
