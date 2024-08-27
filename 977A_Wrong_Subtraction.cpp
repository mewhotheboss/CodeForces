#include<iostream>

using namespace std;

int main()
{
    int num, n;

    cin>>num>>n;

    while(n--)
    {
        if(num%10==0)
        {
            num = num/10;
        }
        else
        {
            num = num-1;
        }
    }

    cout<<num;

    return 0;
}
