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

        int count1 = 0, count2 = 0, totalWeight = 0;
        for (int i = 0; i < n; ++i) 
        {
            int candy;
            cin >> candy;

            if (candy == 1) 
                ++count1;
            else 
                ++count2;

            totalWeight += candy;
        }
    
        if (totalWeight % 2 != 0) 
        {
            cout << "NO" << endl;
            continue;
        }
        
        int halfWeight = totalWeight / 2;
        
        int twoNeeded = min(halfWeight / 2, count2);
        halfWeight -= twoNeeded * 2;
        
        if (halfWeight <= count1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
