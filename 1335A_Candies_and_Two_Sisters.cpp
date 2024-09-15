#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long x;

    cin>>n;

    while(n--)
    {
        cin>>x;

        if(x == 1 || x == 2)
        {
            cout<<"0"<<endl;
        }
        else if(x%2 != 0)
        {
            cout<<x/2<<endl;
        }
        else cout<<(x/2)-1<<endl;
    }

    return 0;
}



