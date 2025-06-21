#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, num;
        cin >> x;

        long long sum = 0;

        for (int i = 0; i < x; ++i)
        {
            cin >> num;
            sum += num;
        }

        long long square = sqrt(sum);

        if (square * square == sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
