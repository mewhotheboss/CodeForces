#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    // ......................................
    
    int t;
    cin >> t;

    while (t--) {
        
        int n;
        cin >> n;
        
        string row1, row2;
        cin >> row1 >> row2;
        
        for (int i = 0; i < n; ++i) {
            if (row1[i] == 'G' || row1[i] == 'B') {
                row1[i] = 'X';
            }
            if (row2[i] == 'G' || row2[i] == 'B') {
                row2[i] = 'X';
            }
        }
        
        if (row1 == row2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
