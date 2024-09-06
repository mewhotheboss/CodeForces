
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    int arr[n], rec[n];

    for (int i = 1; i <= n; ++i)
    {
        cin>>arr[i];
        rec[arr[i]] = i;
    }

    for (int i = 1; i <= n; ++i)
    {
        cout<<rec[i]<<" ";
    }

    return 0;
}


