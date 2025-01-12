#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, miska=0,criss=0,draw=0;
    cin>>n;

    while(n--)
    {
        int x,y;
        cin>>x>>y;

        if(x>y)
        {
            miska++;
        }
        else if(x<y) 
            {
                criss++;
            }else draw++;
    }

    if(miska>criss)
    {
        cout<<"Mishka";
    }
    else if(miska<criss)
    {
        cout<<"Chris";
    }else cout<<"Friendship is magic!^^";

    return 0;
}
