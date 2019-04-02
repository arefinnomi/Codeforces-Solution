#include <iostream>
#include <cstdio>


using namespace std;

int main()
{
    int n, ele;

    scanf("%d", &n);

    bool ary[n];
    for(int i = 0; i < n; i++) ary[i] = false;
    int cont = 0;

    int temp = n;
    while(temp--)
    {
        scanf("%d", &ele);
        if(ary[ele-1] || ele > n ) cont++;
        else ary[ele-1] = true;
    }

    cout<<cont<<endl;
}
