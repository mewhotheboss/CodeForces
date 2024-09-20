#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,z;

    cin>>n;

    while(n--)
    {
        cin>>x>>y>>z;

        if(x+y==z)
        {
            cout<<"+"<<endl;
        }
        else cout<<"-"<<endl;
    }

    return 0;
}


