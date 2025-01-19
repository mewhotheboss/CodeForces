#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector <int> arr(n);

        for(int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        long long maxx = 0;
        
        for(int i = 0; i < n; ++i)
        {
            long long product = 1;
            
            for(int j = 0; j < n; ++j)
            {
                if(i == j)
                {
                    product = product * (arr[j] + 1);
                }
                else
                {
                    product = product * arr[j];
                }
            }
            
            maxx = max(maxx, product);
        }

        cout << maxx << endl;
    }

    return 0;
}
