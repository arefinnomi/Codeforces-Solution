#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector < string > archive1;
    vector <string>  archive2;


    int n, m;
    scanf("%d %d", &n, &m);

    int temp = m;

    string str1, str2;
    while(temp--)
    {
        cin >> str1>>str2;

        archive1.push_back(str1);
        archive2.push_back(str2);
    }


    temp = n;
    int index;

    while(temp--)
    {
        if( temp + 1 != n) cout<<' ';
        cin >> str1;

        index = find(archive1.begin(), archive1.end(), str1) - archive1.begin();

        if ( archive1[index].size() <= archive2[index].size()) cout<<archive1[index];
        else cout<<archive2[index];
    }

    cout<<endl;


}
