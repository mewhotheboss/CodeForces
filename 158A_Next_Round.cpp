#include <iostream>
using namespace std;

int main()
{
    int arr[50];
    int k, n, count = 0;
    cin >> n >> k;

    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];

    }

    for(int i = 1; i <= n; i++)
    {
        if(arr[i] != 0)
        {
            if(arr[i] >= arr[k])
            {
                count++;
            }
        }
    }
    cout << count;

    return 0;
}
