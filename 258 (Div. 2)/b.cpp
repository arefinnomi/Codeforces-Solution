#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int siz;
    scanf("%d", &siz);

    int temp = 0;

    vector < pair<int , int > > vec;

    int num;

    while(temp < siz)
    {
        scanf("%d", &num);

        vec.push_back(make_pair(num, temp));
        temp++;
    }

    sort(vec.begin(), vec.end());

//    for(int i = 0; i < vec.size(); i++) cout << vec[i].first<<" "<<vec[i].second<<endl;

    pair <int , int > index;

    int cont = 0;
    for(int i = 0; i < siz-1 ; i++)
    {
        if(vec[i].second != i )
        {
            if(vec[i].second < vec[i+1].second )
            {

                cont++;
                if(cont == 1) index.first = i;
                while(vec[i].second < vec[i+1].second && i < siz-1) i++;
                if(cont == 1) index.second = i;

            }

            if(vec[i].second > vec[i+1].second )
            {
                cont++;
                if(cont == 1) index.first = i;
                while(vec[i].second > vec[i+1].second&& i < siz-1) i++;
                if(cont == 1) index.second = i;

            }
        }

//        cout << cont<<" "<<i << endl;
        if(cont > 1) break;
    }


    cout<<( cont <= 1 ? "yes":"no")<<endl;

    if(cont<= 1) cout<< index.first+1<<" "<<index.second+1<<endl ;
}
