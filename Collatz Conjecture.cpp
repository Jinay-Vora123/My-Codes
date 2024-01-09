#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    while(x != 1)
    {
        if(x%2==0)
        {
            x = x/2;
            cout << x << endl;
        }

        else
        {
            x = (3*x) + 1;
            cout << x << endl;
        }
    }

    return 0;
}
