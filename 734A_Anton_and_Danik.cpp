#include<iostream>

using namespace std;

int main()
{
    string s;
    int anton=0, danik=0, n;

    cin>>n;
    cin>>s;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
        {
            anton++;
        }
        else danik++;
    }

    if(anton>danik)
    {
        cout<<"Anton";
    }
    else if(anton<danik)
    {
        cout<<"Danik";
    }
    else cout<<"Friendship";

    return 0;
}


