#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;

    while(n--)
    {
        int sum = 0;
        int less = 0;
        cin>>s;

        for (int i = 0; i < 3; ++i)
        {
            sum = sum + (s[i] - '0');
        }

        for (int i = 5; i >= 3; --i)
        {
            less = less + (s[i] - '0');
        }

        if(sum == less)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

    }

    return 0;

}



