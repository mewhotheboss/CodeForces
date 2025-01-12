#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        string row;
        cin >> row;

        if(row=="bca" || row=="cab")
        {
            cout<<"no"<<endl;
        }
        else cout<<"yes"<<endl;
    }

    return 0;
}
