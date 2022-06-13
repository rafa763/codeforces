#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> ls;
    int x, y, b, c = 0;
    cin >> x>> y;


    for(int i = 0; i < x; i++)
    {
        cin>> b;
        ls.push_back(b);
    }

    for(int i = 0; i < x; i++)
    {
        if(ls[i] >= ls[y-1] && ls[i] > 0)
        {
            c++;
        }
    }
    cout<< c <<"\n";
}

