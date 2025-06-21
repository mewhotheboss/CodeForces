#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, num=0;
        cin>>n;

        int arr[n];

        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }

        sort(arr, arr+n);

        for (int i = 0; i < n-2; ++i)
        {
            if (arr[i]==arr[i+1] && arr[i+1]==arr[i+2])
            {
                num = arr[i];
                break;
            }
        }

        if (num>0)
        {
            cout<<num<<endl;;
        }
        else cout<<"-1"<<endl;
    }

    return 0;
}
