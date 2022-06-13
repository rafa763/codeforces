#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> ls;
    int n, c = 0;
    string tmp;
    cin>> n;

    for(int i = 0; i < n; i++)
    {
        cin>> tmp;
        ls.push_back(tmp);
    }

    for(int i = 0; i < ls.size(); i++)
    {
        if(ls[i][1] == '+')
            c++;
        else
            c--;
    }
    cout<< c<< '\n';
}

