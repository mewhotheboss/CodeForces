#include <bits/stdc++.h>
using namespace std;

int main()
{    
    cin>>n;

    while(n--)
    {
        string x,y;
        char temp;
        cin>>x>>y;

        temp = x[0];
        x[0] = y[0];
        y[0] = temp;

        cout<<x<<" "<<y<<endl;
    }

    return 0;
}