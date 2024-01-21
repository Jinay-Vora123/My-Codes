#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n, sum=0;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++)
        {
            if(n%2==0)
            {
                if(i%2==0)
                {
                    a[i]=1;
                }

                else
                {
                    a[i]=-1;
                }
            }

            else 
            {
                if(i%2==0)
                {
                    if(n==5)
                    {
                        a[i]=1;
                    }

                    else
                    {
                        a[i]=1+((n-5)/2); 
                    }
                }

                else
                {
                    a[i] = ((n+1)/2)-n;
                }
            }

            sum += a[i];
        }

        if(n==3)
        {
            cout<<"NO"<<endl;
        }

        else if(sum == a[0]+a[1])
        {
            cout << "YES" << endl;

            for(int i=0;i<n;i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }

        else if(sum!=a[0]+a[1])
        {
            cout << "NO" << endl;
        }

            
    }
    return 0;
}
