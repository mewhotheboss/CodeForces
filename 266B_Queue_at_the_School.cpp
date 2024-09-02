#include<iostream>

using namespace std;

int main()
{
    string s;
    int x,y;

    cin>>x>>y;
    cin>>s;

    for(int j = 0; j < y; j++)
    {
        for(int i = 0; i < x; i++)
        {
            if(s[i] == 'B' && s[i+1] == 'G')
            {
                s[i] = 'G';
                s[i+1] = 'B';
                i += 1;
            }
        }
    }

    cout<<s;

    return 0;
}
