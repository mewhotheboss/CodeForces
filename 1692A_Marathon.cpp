#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a,b,c,d;
    cin>>n;

    while(n--)
    {
        int count = 0;
        cin>>a>>b>>c>>d;

        if(a<b)
        {
            count++;
        }
        if(a<c)
        {
            count++;
        }
        if(a<d)
        {
            count++;
        }

        cout<<count<<endl;
    }

    return 0;

}



