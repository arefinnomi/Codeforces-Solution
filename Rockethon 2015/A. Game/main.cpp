#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n1, n2, k1, k2;

    scanf("%d %d %d %d", &n1, &n2, &k1, &k2);

//    bool flag_a = false;
//    bool flag_b = false;
//

//    while(n1 && n2)
//    {
//        if( n1 <= k1 ) n1 = 0;
//        else n1 -= k1;
//        if( n2 <= k2 ) n2 = 0;
//        else n2 -= k2;
//
//        if( n1 == 0 ) puts("Second");
//        else if( n2 == 0 ) puts("First");
//    }

    if( n1 > n2 ) puts("First");
    if( n1 < n2 ) puts("Second");
    if( n1 == n2 ) puts("Second");


    return 0;
}
