#include <bits/stdc++.h>
using namespace std;

int main()
{    
    int n,x,y,z;
    cin>>n;

    while(n--)
    {
        cin>>x>>y>>z;

        if(x+y>=10 || x+z>=10 || y+z>=10)
        {
            cout<<"yes"<<endl;
        }
        else cout<< "no"<<endl;
    }

    return 0;
}
