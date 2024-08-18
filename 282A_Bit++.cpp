#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int bit=0;
    while(num--)
    {
        string str;
        cin>>str;
        for(int i=0; i<str.length(); i++)
        {
            if(str[i] == '+' && str[i+1] == '+')
            {
                bit++;
            }
            else if(str[i] == '-' && str[i+1] == '-')
            {
                bit--;
            }
        }
    }
    cout<<bit<<"\n";

    return 0;
}
