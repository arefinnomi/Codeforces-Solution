#include <iostream>
#include <cstdio>

using namespace std;

char load[55][55] = {0};
bool flag[55][55] = {false};
int cont = 0;
int n, m;


bool check( int i, int j, int fa_i, int fa_j,  char ch)/*here fa_i, fa_j is the element's position how call the element i,j*/
{

//    printf("%d %d %d %d %c %d\n", i, j, fa_i, fa_j, ch, flag[i][j]);


    bool re = false;
    cont++;
    if( cont > 4 && flag[i][j] == true && load[i][j] == ch) re = true;
    else if( load[i][j] == ch && flag[i][j] == false)
    {
        flag[i][j] = true;

        if( i != 0  && re == false)
        {
            if ( i - 1 != fa_i )
                re = check( i - 1, j, i, j, ch);
        }

        if( i != n-1  && re == false)
        {
            if ( i + 1 != fa_i )
                re = check( i + 1, j, i, j, ch);
        }

        if( j != 0 && re == false)
        {
            if ( j - 1 != fa_j )
                re = check( i , j - 1 , i, j, ch);
        }

        if( j != m-1 && re == false )
        {
            if ( j + 1 != fa_j )
                re = check( i , j + 1, i, j, ch);
        }

    }
    else re = false;

//    printf("-----------------%d %d re  %d\n", i, j, re );

    return re;

}



int main()
{

    scanf("%d %d ", &n, &m);

    for( int i = 0; i < n; i++)
    {
        gets(load[i]);
    }


    bool found = false;
    for( int i = 0; i < n; i++)
    {
        for( int j = 0; j < m; j++)
        {

            if(flag[i][j] == false)
            {
                cont = 0;
                found = check(i, j, 0, 0, load[i][j]);
            }

            if(found) break;
        }
        if(found) break;
    }


    if(found) puts("Yes");
    else puts("No");


    return 0;
}
