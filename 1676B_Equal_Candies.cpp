#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, sum=0;
        cin>>n;

        int arr[n];

        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }

        sort(arr,arr + n);        

        int minus = arr[0];

        for (int i = 0; i < n; ++i)
        {
            sum = sum + (arr[i]-minus);
        }

        cout<<sum<<endl;
    }

    return 0;
}
