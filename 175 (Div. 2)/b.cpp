#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, s, t;

    cin >> n >> s >> t;

    int ary[n+1];

    for(int i = 1; i <= n; i++) scanf("%d", &ary[i]);
//    for(int i = 1; i <= n; i++) printf("%d %d\n", i, ary[i]);


//    cout<<ary[2]<<endl<<endl;


    bool flag[n+1];

    for(int i = 0; i <= n; i++) flag[i] = true;


    int i = s;

    int cont = 0;

    while(flag[i])
    {
//        cout << i <<" ";


        if( i == t ) break;

        flag[i] = false;

//        cout<<ary[i]<<endl;

        i = ary[i];
        cont++;

    }

//    cout<<endl;

    if( i == t ) cout << cont<<endl;
    else cout << -1 <<endl;
}
