#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n % 4 == 0) {
        cout << "Bob\n";
    } else {
        cout << "Alice\n";
    }
}

int main() {

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
