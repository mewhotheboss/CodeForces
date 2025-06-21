#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int hor[4], ver[4];

        for (int i = 0; i < 4; ++i)
        {
            cin>>hor[i]>>ver[i];
        }

        int sum = abs(hor[0]-hor[1]);

        if(sum==0)
        {
            sum = abs(ver[0]-ver[1]);
        }

        cout<<sum*sum<<endl;
    }

    return 0;
}
