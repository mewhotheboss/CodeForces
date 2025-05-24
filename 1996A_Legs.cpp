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

        int min_animals = n / 4;

        if (n % 4 != 0)
        {
            min_animals++;
        }

        cout << min_animals << "\n";
    }

    return 0;
}
