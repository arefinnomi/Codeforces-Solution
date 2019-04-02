#include <iostream>
#include <cstdio>


using namespace std;

int main()
{
//    while(1)
    {
        int ary[5] = {0};

        int n;
        scanf("%d", &n);

        int ind;

        int temp = n;

        while(temp--)
        {
            scanf("%d", &ind);
            ary[ind]++;
        }

//        for(int i = 0; i < 5; i++) cout<<ary[i]<<endl;

        int cont = 0;
        ary[1] = ary[1] > ary[3] ? ary[1] - ary[3] : 0;
        cont = ary[4];
        cont += ary[3];
        cont += ary[2] / 2;
        ary[2] %= 2;
        cont += ary[2];
//    cout<<cont<<endl;
        cont += ary[1] / 4;
        ary[1] %= 4;
//    cout<<cont<<endl;




        ary[1] = ary[1] > 2 * ary[2] ? ary[1] - 2 * ary[2] : 0 ;

        cont += ary[1] != 0 ? 1:0;


        cout<<cont<<endl;
    }

}



