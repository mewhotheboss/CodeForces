#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int max_val = 0, sum = 0;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        max_val = max(max_val, x);
        sum += x;
    }

    cout << (n * max_val - sum) << endl;

    return 0;
}
