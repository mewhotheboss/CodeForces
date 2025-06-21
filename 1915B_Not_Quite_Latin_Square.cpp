#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a=0,b=0,c=0;

        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                char ch;
                cin>>ch;

                if (ch=='A')
                {
                    a++;
                }
                else if (ch=='B')
                {
                    b++;
                }
                else if (ch=='C')
                {
                    c++;
                }
            }
        }

        if (a==2)
        {
            cout<<"A"<<endl;
        }
        else if (b==2)
        {
            cout<<"B"<<endl;
        }
        else cout<<"C"<<endl;
    }

    return 0;
}
