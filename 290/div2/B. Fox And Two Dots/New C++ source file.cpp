#include <iostream>
#include <cstdio>

using namespace std;

int n, m;

char load[55][55] = {0};
char flag[55][55] = {0};
char work[55][55] = {0};


bool check( int i, int j, char ch)
{

    printf("%d %d %c %c\n", i, j, ch , load[i][j] );
    bool re = false;

    if( flag[i][j] == 1 && work[i][j] == 1 && ch == load[i][j] && re == false)
    {
        re = true;
        printf("%d %d %c %c ", i, j, ch , load[i][j] );
        printf("vklfml\n");
    }

    else if( flag[i][j] == 0 && ch == load[i][j] )
    {
        printf("y");
        flag[i][j] = 1;
        work[i][j] = 1;

        if( i != 0 && flag[ i - 1][j] == 0 && re == false) re = check( i - 1, j, ch);

        if( i != n-1 && flag[ i + 1][j] == 0 && re == false) re = check( i + 1, j, ch);

        if( j != 0 && flag[i][j - 1 ] == 0 && re == false) re = check( i , j - 1 , ch);

        if( j != n-1  && flag[i][j + 1 ] == 0 && re == false ) re = check( i , j + 1, ch);
    }
    else re = false;

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
            if( flag[i][j] == 0 )
            {
                found = check(i , j, load[i][j]);
                printf("%d\n", found);
            }

            printf("\n\n");

            //else
            {
                for( int a = 0; a < n; a++)
                {
                    for( int b = 0; b < m; b++)
                    {
                        printf("%d ", work[a][b] );
                        work[a][b] = 0;
                    }
                    printf("\n");
                }
            }
            if( found) break;
        }
        if( found) break;
    }


    if( found) puts("Yes");
    else puts("No");
    return 0;
}
