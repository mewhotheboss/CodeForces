#include<iostream>

using namespace std;

int main()
{
    int t, a, b;
    cin>>t;

    while (t--)
    {
        cin>>a>>b;
        int remainder = a % b;
        if (remainder == 0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<b-remainder<<endl;
        }
    }

    return 0;
}
