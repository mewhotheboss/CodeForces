#include<iostream>

using namespace std;

int main()
{
    string s, s2;
    int i, sum=0, sum2=0;

    cin>>s>>s2;

    for(i=0; i<s.length(); i++)
    {
        s[i] = tolower(s[i]);
        s2[i] = tolower(s2[i]);
    }

    if(s<s2)
    {
        cout<<"-1";
    }
    else if(s>s2)
    {
        cout<<"1";
    }
    else
    {
        cout<<"0";
    }

    return 0;
}

