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
        
        int winner = 0;
        int max_quality = 0;
        
        for (int i = 1; i <= n; i++) {
            int x, y;
            cin >> x >> y;
            
            if (x <= 10 && y > max_quality) {
                max_quality = y;
                winner = i;
            }
        }
        
        cout << winner << endl;
    }

    return 0;
}
