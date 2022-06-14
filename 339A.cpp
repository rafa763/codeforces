#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>> s;
    vector<char> ls;
    // 3+2+1
    int m = s.length();

    if(m == 1)
    {
        cout<<s<<"\n";
        return 0;
    }
    for(int j = 0; j < m; j++)
    {
        if((int)s[j] == 49)
        {
            ls.push_back(s[j]);
        }
    }
    for(int k = 0; k < m; k++)
    {
        if((int)s[k] == 50)
        {
            ls.push_back(s[k]);
        }
    }
    for(int l = 0; l < m; l++)
    {
        if((int)s[l] == 51)
        {
            ls.push_back(s[l]);
        }
    }

    for(int i = 0, m = ls.size(); i < m; i++)
    {
        cout<<ls[i];
        if(i < m-1)
        {
            cout<<"+";
        }
    }


    cout<<'\n';
}
