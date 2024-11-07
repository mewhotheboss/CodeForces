#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        int x = n%10;

        int y = n-x;

        int z = y/10;

        int sum = x+z;

        cout<<sum<<endl;
    }

    return 0;

}


