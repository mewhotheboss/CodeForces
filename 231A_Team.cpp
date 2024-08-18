#include<iostream>

using namespace std;

int main()
{
    int n, x, y, z, sum = 0;

    cin>>n;

    while(n--)
    {
        cin>> x >> y >> z;
        if(x+y+z >=2)
            sum = sum+1;
    }

    cout<<sum;

    return 0;
}
