#include<iostream>

using namespace std;

int main()
{
    int n, x, y, count=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>x>>y;

        if(y-x>=2)
        {
            count++;
        }
    }

    cout<<count;

    return 0;
}


