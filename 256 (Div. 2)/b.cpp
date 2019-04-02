#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool suffix_str( string str1, string str2)
{
    bool flag = true;

    int ind = 0;

    for(int i = 0; i < str2.size(); i++)
    {
        int j ;
        for( j = ind; j < str1.size(); j++)
        {
            if(str2[i] == str1[j])
            {
                ind = j + 1;
                break;
            }
        }
//        cout<<i<<" "<<j<<" "<<ind<<endl;
        if(j == str1.size()) return false;
    }

    return true;
}

int main()
{
//    cout<<suffix_str("abacaba","aaaa");
//    while(1)
    {

        int str1[26] = {0};
        int str2[26] = {0};

        string string1 = "";
        string string2 = "";

        char ch = 0;

        while(ch != 10)
        {
            scanf("%c", &ch);

            if(ch == 10) break;
            string1 += ch;

            str1[ch-'a']++;
        }
        ch = 0;
        while(ch != 10)
        {
            scanf("%c", &ch);
            if(ch == 10) break;
            string2 += ch;
            str2[ch-'a']++;
        }
//
//        sort(string1.begin(), string1.end());
//        sort(string2.begin(), string2.end());

        bool ato = false;

        for( int i = 0; i < 26; i++)
        {
            if(str2[i] > str1[i] )
            {
                cout<<"need tree"<<endl;
                return 0;
            }
        }


        for( int i = 0; i < 26; i++)
        {
            if(str2[i] < str1[i] )
            {
                ato = true;
                break;
            }
        }

        if(ato == false) cout<<"array"<<endl;
        else if( suffix_str(string1, string2)) cout<<"automaton"<<endl;
        else cout<<"both"<<endl;
    }
}
