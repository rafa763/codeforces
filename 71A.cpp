#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, m;
    string w;
    cin>>n;

    vector<string> ls;
    for(int i = 0; i < n; i++)
    {
        cin >>w;
        ls.push_back(w);
    }

    for(int i = 0; i < ls.size(); i++)
    {
        m=ls[i].size();
        if(m > 10)
        {
            cout << ls[i][0] << m-2 <<ls[i][m-1] <<endl;
        }
        else
        {
            cout << ls[i] <<endl;
        }
    }
}
