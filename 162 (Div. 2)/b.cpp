#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    long long sec = 0;
    int n;

    scanf("%d", &n);

    int tree_now, tree_pre = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &tree_now);

        sec +=(long long) abs(tree_now - tree_pre);

        tree_pre = tree_now;
    }

    sec += (long long ) n;
    sec += (long long ) n-1;

    cout<<sec<<endl;
}
