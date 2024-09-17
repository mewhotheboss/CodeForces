#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c;

    cin>>n;

    while(n--)
    {
        cin>>a>>b>>c;

        if(a+b == c)cout<<"YES"<<endl;
        else if(a+c == b)cout<<"YES"<<endl;
        else if(b+c == a)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}



