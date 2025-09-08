#include<bits/stdc++.h>
using namespace std;

int main()
{    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> result(n);        
        
        for (int i = n - 1; i >= 0; --i) {
            string row;
            cin >> row;           
            
            for (int j = 0; j < 4; ++j) {
                if (row[j] == '#') {
                    result[i] = j + 1;
                    break;
                }
            }
        }        
        
        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}