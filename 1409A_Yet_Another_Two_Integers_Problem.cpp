#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--) {
        long long x, y;
        cin >> x >> y;

        if (x == y) {
            cout << "0\n";
        } else {
            long long rest = abs(y - x);
            long long count = (rest + 9) / 10;
            cout << count << "\n";
        }
    }

    return 0;
}
