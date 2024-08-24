#include<iostream>

using namespace std;

int main()
{
    int price, dollars, num, rest, i, sum = 0;

    cin>>price>>dollars>>num;

    for(i=1; i<=num; i++)
    {
        sum = sum + i*price;
    }

    rest = sum-dollars;

    if(rest>=0)
    {
        cout<<rest;
    }
    else cout<< "0";

    return 0;
}
