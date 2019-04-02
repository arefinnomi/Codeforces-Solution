By arefinnomi, contest: Codeforces Round #142 (Div. 2), problem: (B) T-primes, Accepted, #
 #include <iostream>
#include <cstdio>
#include <set>
#include <cmath>

using namespace std;

int x = 1e6;
char prime[(int)1e6 + 1];
void seive(void)
{
    int i, j, limit;

    for( i = 2 ; i <= x ; i++) prime[i] = 1;/*let all array index be prime*/

    limit = sqrt(x);

    for( i = 2 ; i <= limit ; i++) /* finding for array index whether it is prime or not*/
    {
        if( prime[i] == 1 )

            for( j = i + i ; j <= x ; j += i) prime[j] = 0 ;
    }
}

int main()
{
    seive();
    int test;
    scanf("%d", &test);
    int cont;

    while(test--)
    {
        long long num;
        scanf("%I64d", &num);

        long long root = sqrt(num);
//        cout<<root<<root*root<< endl;
        if(prime[root] && root * root == num) printf("YES\n");
        else printf("NO\n");

    }
}
