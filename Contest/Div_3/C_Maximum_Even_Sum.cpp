#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long maxSum = a * b + 1;
        if (maxSum % 2 == 0) {
            cout << maxSum << "\n";
            continue;
        }

        if (b % 2 == 0) {
            long long sum = a * (b / 2) + 2;
            if (sum % 2 == 0) {
                cout << sum << "\n";
                continue;
            }
        }

        cout << -1 << "\n";
    }
    return 0;
}
