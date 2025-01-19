#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t,x=0,y=0;
    cin>>t;

    while(t>x+y)
    {
        y++;
        x = x+y;
        t = t-x;
    }

    cout<<y<<endl;

    return 0;
}
