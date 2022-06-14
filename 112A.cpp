#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 0;
    string n, m;
    cin>> n>> m;

    for(int i = 0; i < n.length(); i++)
    {
        n[i] = tolower(n[i]);
        m[i] = tolower(m[i]);

        if(n[i] > m[i])
        {
            cout<<"1\n";
            t++;
            break;
        }
        else if(n[i] < m[i])
        {
            cout<<"-1\n";
            t++;
            break;
        }
    }
    if(t == 0)
        cout<<"0\n";
}

