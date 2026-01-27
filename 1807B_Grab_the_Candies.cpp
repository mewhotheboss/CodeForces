#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int x = 0, y = 0;
    while (n--) {
        int num;
        cin >> num;
        if (num % 2 == 0) x += num;
        else y += num;
    }

    if (x > y) cout << "YES\n";
    else cout << "NO\n";
}


int main() {
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
