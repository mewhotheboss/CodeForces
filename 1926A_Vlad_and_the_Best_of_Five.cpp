#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--)
    {
        int count = 0, bbb = 0;
        string s;
        cin>>s;

        for (int i = 0; i < 5; ++i)
        {
            if(s[i]=='A')
            {
                count++;
            }else bbb++;
        }

        if (count>bbb)
        {
            cout<<"A"<<endl;
        }else cout<<"B"<<endl;
    }

    return 0;
}
