#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            int o=0;
            if(i%2==0)
            {
                o = i/2;
            }

            if(i%2==1)
            {
                cout << "#";
            }

            else if(i==2 && j == m)
            {
                cout << "#";
            }

            else if(i%2==0 && o%2==0 && j == 1)
            {
                cout << "#";
            }

            else if(i%2==0 && o%2==1 && j == m)
            {
                cout << "#";
            }

            else
            {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}
