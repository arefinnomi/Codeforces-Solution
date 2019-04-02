#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    cin >> str;

    int low = -1, high = -1;

    for(int i = 0; i < str.size() - 1 ; i++)
    {
        if(low == -1 ){ if(( (str[i] - '0') & 1) == 0) low = i;}
        else
        {
            if( str[low] < str[str.size() - 1] ) break ;
            else
            {
                if(( (str[i] - '0') & 1) == 0) low = i;
            }
        }
    }

    if(low==-1)
    {
        cout<<-1<<endl;
        return 0;
    }
    swap(str[low], str[str.size()-1]);


    cout<<str<<endl;
}
