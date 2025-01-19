#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t,sum=0;
    cin >> t;

    while (t--) 
    {
        int n;
        cin>>n;

        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
            sum = sum + arr[i];
        }
        if(sum%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
        sum = 0;
    }

    return 0;
}
