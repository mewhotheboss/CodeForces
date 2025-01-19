#include <bits/stdc++.h>
using namespace std;

int main() 
{    
    long t;
    cin >> t;

    while (t--) 
    {        
        int n;
        cin>>n;
        int arr[n];

        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }

        int max = *max_element(arr,arr+n);
        int min = *min_element(arr,arr+n);
        cout<<max-min<<endl;
    }

    return 0;
}
