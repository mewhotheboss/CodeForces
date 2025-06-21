#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;

        int arr[n*2];

        int pos=0, neg=0;

        for (int i = 0; i < n*2; ++i)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n*2; ++i)
        {
            if (arr[i]%2==0)
            {
                pos++;
            }
            else neg++;
        }

        if (pos==neg)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}
