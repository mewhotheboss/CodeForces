#include<iostream>

using namespace std;

int main()
{
    int num, height, sum=0;

    cin>>num>>height;

    int arr[num];

    for(int i = 0; i<num; i++)
    {
        cin>>arr[i];

        if(arr[i]>height)
        {
            sum = sum+2;
        }
        else
        {
            sum++;
        }
    }

    cout<<sum;

    return 0;
}



