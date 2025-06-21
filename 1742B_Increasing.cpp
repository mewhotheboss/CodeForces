#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_set<int> elements;
        bool hasDuplicate = false;

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if (elements.find(arr[i]) != elements.end()) {
                hasDuplicate = true;
            }
            elements.insert(arr[i]);
        }

        if (hasDuplicate) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
