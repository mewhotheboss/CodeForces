#include <bits/stdc++.h>
using namespace std;

int findKthGoodNumber(int k) {
    int count = 0, num = 0;
    while (count < k) {
        num++;
        if (num % 3 != 0 && num % 10 != 3) {
            count++;
        }
    }
    return num;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;
        cout << findKthGoodNumber(k) << endl;
    }

    return 0;
}
