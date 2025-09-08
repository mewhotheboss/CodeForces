#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << endl;
        } 
        else {
            int mx = max(a, b);
            int mn = min(a, b);

            if (mx % mn == 0) {
                cout << 1 << endl;
            } 
            else {
                cout << 2 << endl;
            }
        }
    }
    return 0;
}
