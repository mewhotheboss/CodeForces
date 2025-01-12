#include <bits/stdc++.h>
using namespace std;

int main()
{    
    int n,x,y,z;
    cin>>n;

    while(n--)
    {
        cin>>x>>y>>z;

        if(x==y)
        {
            cout<<z<<endl;
        }
        else if(x==z)
        {
            cout<<y<<endl;
        }
        else cout<<x<<endl;
    }

    return 0;
}
