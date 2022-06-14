#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ls[5][5], c;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin>>ls[i][j];
            if(ls[i][j] == 1)
            {
                c = abs(i-2)+abs(j-2);
            }
        }
    }
    cout<<c <<'\n';
}
