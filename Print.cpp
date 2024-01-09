#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string x = s;

    for(int i=0;i<s.size();i++)
    {
        char a='a',A='A';
        int j=i;

        if(s[i]>='A' && s[i]<='Z')
        {
            while(s[i])
            {
                if(A==s[i])
                {
                    x[j]=A;

                    for(int j=0;j<=i;j++)
                    {
                        cout<<x[j];
                    }
                    cout<<endl;
                    break;
                }

                x[i]=A;
                
                for(int j=0;j<=i;j++)
                {
                    cout<<x[j];
                }
                cout<<endl;
                A++;
            }
        }

        else if(s[i]>='a' && s[i]<='z')
        {
            while(s[i])
            {
                if(a==s[i])
                {
                    x[j]=a;

                    for(int j=0;j<=i;j++)
                    {
                        cout<<x[j];
                    }
                    cout<<endl;
                    break;
                }

                x[i]=a;
                
                for(int j=0;j<=i;j++)
                {
                    cout<<x[j];
                }
                cout<<endl;
                a++;
            }
        }
    }
    return 0;
}
