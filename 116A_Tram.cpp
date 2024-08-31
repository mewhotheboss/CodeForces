#include<iostream>

using namespace std;

int main()
{
    int i, n, down, up, x, y, cap=0, max = 0;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>down>>up;

        if(cap!=0)
        {
            cap = cap-down;
            cap = cap+up;
        }
        else
        {
            cap = cap+up;
        }

        if(cap>max)
        {
            max = cap;
        }
    }

    cout<<max;

    return 0;
}


