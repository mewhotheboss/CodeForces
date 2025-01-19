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
        int arr[n];
        int sum = 0, max = 0, curr = 0;

        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n; ++i)
        {
            if (arr[i]==0)
            {
                curr++;
            }
            else
            {
                if (curr>max)
                {
                    max = curr;                    
                }
                curr = 0;
            }
        }

        if (curr>max)
            {
                max = curr;
            }

        cout<<max<<endl;
    }

    return 0;
}
