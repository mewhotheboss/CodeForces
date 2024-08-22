#include<iostream>

using namespace std;

int main()
{
    int i, size, count =0;
    string s;

    cin>>size>>s;

    for(i=0; i<size-1; i++)
    {
        if(s[i] == s[i+1])
        {
            count++;
        }
    }

    cout<<count;

    return 0;
}
