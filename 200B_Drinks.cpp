#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    float arr[n], sum = 0, ans = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    ans = sum/n;

    cout<< ans << endl;

    return 0;
}


