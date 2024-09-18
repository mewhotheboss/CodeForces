#include<iostream>
using namespace std;

int main()
{
    char a[20];
    int t;
    cin>>t;

    for(int i = 0; i < t; i++)
    {
        cin>>a;

        if((a[0] == 'Y' || a[0] == 'y') && (a[1] == 'E' || a[1] == 'e') && (a[2] == 'S' || a[2] == 's'))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

